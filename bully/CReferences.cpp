#include "tools/bully.hpp"

#include "CReferences.hpp"

using namespace bullyapi;

CReference *CReferences::aRefs = reinterpret_cast<CReference*>(0x0C0F7C0);
CReference *&CReferences::pEmptyList = *reinterpret_cast<CReference**>(0xC11D40);

void CReferences::Init() {
    Call<0x450850>();
}