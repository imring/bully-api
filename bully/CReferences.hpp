#pragma once

#include "CReference.hpp"

namespace bullyapi {

class CReferences {
public:
    static CReference *aRefs; // 1200
    static CReference *&pEmptyList;

    static void Init();
};

};