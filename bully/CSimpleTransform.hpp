#pragma once

#include "CVector.hpp"
#include "CMatrix.hpp"

namespace bullyapi {

class CSimpleTransform {
public:
    CVector m_vPosn;
    float   m_fHeading;

    void UpdateMatrix(CMatrix *out);
};

};