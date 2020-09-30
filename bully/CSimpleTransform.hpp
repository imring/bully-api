#pragma once

#include "CVector.hpp"
#include "CMatrix.hpp"

namespace bullyapi {

class CSimpleTransform {
public:
    CSimpleTransform() = default;
    CSimpleTransform(const CMatrix *mat); // maybe wrong

    CVector m_vPosn;
    float   m_fHeading;

    void UpdateMatrix(CMatrix *out);
};

};