//
//  cff.h
//  Scribus
//
//  Created by Andreas Vox on 04.05.15.
//
//

#ifndef Scribus__cff_h
#define Scribus__cff_h


#include "scribusapi.h"

#include <QByteArray>
#include <QHash>
#include <QList>
#include <QMap>
#include <QString>

#include <ft2build.h>
#include FT_FREETYPE_H

namespace cff {
    
    typedef quint16 sid_type;
    typedef uint operator_type;
    
    enum sid_range {
        sid_min = 0,
        sid_last_std = 390,
        sid_max = 64999,
        sid_max1 = 65000
    };
    
    enum CFF_Header_Format {
        cff_major   = 0,
        cff_minor   = 1,
        cff_hdrSize = 2,
        cff_offSize = 3
    };
    
    
    enum CFF_INDEX_Format {
        cff_idx_count   = 0,
        cff_idx_offsize = 2,
        cff_idx_offsets = 3
    };
    
    
    enum cff_Real_Format {
        cff_nibble_maxDigit = 9,
        cff_nibble_Point    = 10,
        cff_nibble_PosExp   = 11,
        cff_nibble_NegExp   = 12,
        cff_nibble_Reserved = 13,
        cff_nibble_Minus    = 14,
        cff_nibble_End      = 15
    };
    
    
    enum CFF_DICT_Format {
        cff_dict_TwoBytes      = 12,
        cff_dict_Card16        = 28,
        cff_dict_Card32        = 29,
        cff_dict_Real          = 30,
        cff_dict_minOperand    = 32,
        cff_dict_maxSmallCard  = 246,
        cff_dict_biasSmallCard = -139,
        cff_dict_minPosCard    = 247,
        cff_dict_maxPosCard    = 250,
        cff_dict_biasPosCard   = 108,
        cff_dict_minNegCard    = 251,
        cff_dict_maxNegCard    = 254,
        cff_dict_biasNegCard   = -108
    };
    
    
    enum CFF_Variant_Type {
        cff_varnt_Error    = 0,
        cff_varnt_Bool     = 1,
        cff_varnt_Card     = 2,
        cff_varnt_SID      = 3,
        cff_varnt_Real     = 4,
        cff_varnt_Array    = 5,
        cff_varnt_Delta    = 6,
        cff_varnt_Operator = 7
    };

    
    struct CFF_Number {
        long long   card;
        int         exponent;
        uchar       type;
        bool        isCardinal() const;
        double      toDouble() const;
        int         toCardinal() const;
    };
    

    struct CFF_Variant {
        uchar type;
        QList<CFF_Number> array;
        CFF_Variant()                      : type(cff_varnt_Error) {}
        CFF_Variant(CFF_Number val)        : type(val.type), array() { array.append(val); }
        CFF_Variant(QList<CFF_Number> arr) : type(cff_varnt_Array), array(arr) {}
    };
    
    
    class CFF {
    public:
        CFF(const QByteArray& cff);

        uint readCard(uint pos) const;
        QByteArray readSegment(uint pos, uint size) const;
        QHash<operator_type,CFF_Variant> readDict(const QByteArray& dict) const;
        QList<QByteArray> readIndex(uint& pos) const;
        CFF extract(uint faceIndex);
        CFF subset(QList<uint> cids);
        
        void dump();
        QByteArray dump(const CFF_Variant& var);
        
        const QByteArray& data() const {
            return bytes;
        }
        
        QList<QByteArray> fontNames() const {
            return fontTopDicts.keys();
        }
        
        uint offset(uint unscaled)
        {
            return unscaled * offsetSize;
        }
        
        QByteArray string(sid_type sid) const {
            return sid < strings.length()? strings[sid] : "";
        }
        
        sid_type sid(const QByteArray str) const {
            return sids.contains(str)? sids[str] : sid_max1;
        }
        
    private:
        QByteArray bytes;
        uint offsetSize;
        
        QMap<QByteArray, QHash<uint,CFF_Variant> > fontTopDicts;
        QList<QByteArray> strings;
        QHash<QByteArray,uint> sids;
        QList<QByteArray> globalSubr;
        
        CFF_Number createSid(const QByteArray& str);
        
        bool parseDict(const QByteArray& dict, uint& pos, CFF_Number& number) const;
        CFF_Number parseReal(const QByteArray& dict, uint& pos) const;
        CFF_Number parseCard(const QByteArray& dict, uint& pos) const;
    };
    
    QByteArray extractFace(const QByteArray& cff, int faceIndex) {
        return CFF(cff).extract(faceIndex).data();
    }
    
    QByteArray subsetFace(const QByteArray& cff, QList<uint> cids) {
        return CFF(cff).subset(cids).data();
    }
    
}


#endif /* defined(Scribus__cff_h) */
