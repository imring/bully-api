#pragma once

#include "CPlaceable.hpp"
#include "CReference.hpp"

namespace bullyapi {

class CEntityFlags {
public:
    int dword0;
    int dword4;
    int dword8;
    unsigned int m_bIsStatic;
    int dword10;
    int dword14;
    int dword18;
    int dword1C;
    int dword20;
    int dword24;
    int dword28;
    int dword2C;
    int dword30;
    int dword34;
    int dword38;
    int dword3C;
    int dword40;
    int dword44;
    int dword48;
    int dword4C;
    int dword50;
    int dword54;
    int dword58;
    int dword5C;
    int dword60;
    int dword64;
    int dword68;
    int dword6C;
    int dword70;
    int dword74;
    int dword78;
    int dword7C;
    int dword80;
    int dword84;
    int dword88;
    int dword8C;
    int dword90;
    int dword94;
    int dword98;
    int dword9C;
    int dwordA0;
    int dwordA4;
    int dwordA8;
    int dwordAC;
    unsigned int m_bIsDestroyed;
    int dwordB4;
    int dwordB8;
    int dwordBC;
    int dwordC0;
    int dwordC4;
    int dwordC8;
    int dwordCC;
    int dwordD0;
    int dwordD4;
    int dwordD8;
    int dwordDC;
    int dwordE0;
    int dwordE4;
    int dwordE8;

    void Clear();
};

class CEntity: public CPlaceable {
public:
    CEntity();
    virtual ~CEntity();

    // void **m_lpVtbl = 0x90BF64 B330B0
    unsigned int   dword18;
    CEntityFlags   m_entityFlags;
    unsigned char  m_nStatus;
    unsigned short word10A;
    unsigned short word10C;
    unsigned short m_nModelIndex;
    unsigned char  byte110;
    unsigned char  byte111;
    unsigned short word112;
    unsigned int   dword114;
    CReference    *m_pReferences;
    float          float11C;

    virtual bool IsType(short arg0);
    virtual void Add();
    virtual void Remove();
    virtual bool IsBike();
    virtual bool IsCar();
    virtual short SetStatus(unsigned short nStatus);
    virtual void SetIsStatic(bool bIsStatic);
    virtual void SetModelIndex(unsigned int nModelIndex, bool arg1);
    virtual void SetModelIndexNoCreate(unsigned int nModelIndex);

    bool HasPreRenderEffects();
    void RegisterReference(CEntity **pEntity);
    void CleanUpOldReference(CEntity **pEntity);
    void ResolveReferences();
    void PruneReferences();
};

};