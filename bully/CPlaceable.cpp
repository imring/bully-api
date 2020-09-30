#include "tools/bully.hpp"

#include "CPlaceable.hpp"

using namespace bullyapi;

CPlaceable::CPlaceable() {
    CallMethod<0x46D9B0>(this);
}

bool CPlaceable::IsWithinArea(float x1, float y1, float x2, float y2) {
    return CallMethod<0x46D9D0, bool>(this, x1, y1, x2, y2);
}

bool CPlaceable::IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    return CallMethod<0x46DAB0, bool>(this, x1, y1, z1, x2, y2, z2);
}

void CPlaceable::RemoveMatrix() {
    CallMethod<0x46DC00>(this);
}

CMatrix *CPlaceable::GetTransform() {
    return CallMethod<0x46DD20, CMatrix *>(this);
}

void CPlaceable::AllocateStaticMatrix() {
    CallMethod<0x46DD40>(this);
}

void CPlaceable::AllocateMatrix() {
    CallMethod<0x46DDF0>(this);
}

void CPlaceable::SetMatrix(const CMatrix &mat, bool bAllocMatrix) {
    CallMethod<0x46DE90>(this, mat, bAllocMatrix);
}

CMatrixLink *CPlaceable::GetMatrix() {
    return CallMethod<0x8B6120, CMatrixLink *>(this);
}

void CPlaceable::InitMatrixArray() {
    Call<0x46DBF0>();
}