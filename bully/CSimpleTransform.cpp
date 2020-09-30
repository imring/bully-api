#include "tools/bully.hpp"

#include "CSimpleTransform.hpp"

using namespace bullyapi;

CSimpleTransform::CSimpleTransform(const CMatrix *mat) {
    CallMethod<0x435C20>(this, mat);
}

void CSimpleTransform::UpdateMatrix(CMatrix *out) {
    CallMethod<0x46DCA0>(this, out);
}