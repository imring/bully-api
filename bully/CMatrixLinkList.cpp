#include "tools/bully.hpp"

#include "CMatrixLinkList.hpp"

using namespace bullyapi;

CMatrixLinkList &CMatrixLinkList::gMatrixList = *reinterpret_cast<CMatrixLinkList*>(0xC2A930);

void CMatrixLinkList::Init(unsigned int size) {
    CallMethod<0x46D780>(this, size);
}

CMatrixLinkList *CMatrixLinkList::AddToList1() {
    return CallMethod<0x46D6E0, CMatrixLinkList *>(this);
}

CMatrixLinkList *CMatrixLinkList::AddToList2() {
    return CallMethod<0x46D720, CMatrixLinkList *>(this);
}