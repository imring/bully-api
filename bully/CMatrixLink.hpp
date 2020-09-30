#pragma once

#include "CMatrix.hpp"
#include "CPlaceable.hpp"

namespace bullyapi {

class CMatrixLink: public CMatrix {
public:
    CPlaceable  *m_pOwner;
    CMatrixLink *m_pPrev;
    CMatrixLink *m_pNext;
};

};