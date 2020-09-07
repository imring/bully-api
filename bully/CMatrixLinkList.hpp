#pragma once

#include "CMatrixLink.hpp"

namespace bullyapi {

class CMatrixLinkList {
public:
    CMatrixLink  _l1Head;
    CMatrixLink  _l1Tail;
    CMatrixLink  allocatedListHead;
    CMatrixLink  allocatedListTail;
    CMatrixLink  freeListHead;
    CMatrixLink  freeListTail;
    CMatrixLink *m_pObjects;

    static CMatrixLinkList &gMatrixList;

    void Init(unsigned int size);
    CMatrixLinkList *AddToList1();
    CMatrixLinkList *AddToList2();
};

};