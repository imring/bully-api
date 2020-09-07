#pragma once

#include "CSimpleTransform.hpp"
#include "CMatrixLink.hpp"

namespace bullyapi {

class CPlaceable {
public:
    CPlaceable();
    virtual ~CPlaceable();

    // void **m_lpVtbl = 0x90C74C;
    CSimpleTransform  m_placement;
    CMatrixLink      *m_matrix;
    
    bool IsWithinArea(float x1, float y1, float x2, float y2);
    bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    void RemoveMatrix();
    CMatrix *GetTransform();
    void AllocateStaticMatrix();
    void AllocateMatrix();

    static void InitMatrixArray();
};

};