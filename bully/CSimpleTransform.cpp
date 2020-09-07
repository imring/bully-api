#include "tools/bully.hpp"

#include "CSimpleTransform.hpp"

using namespace bullyapi;

void CSimpleTransform::UpdateMatrix(CMatrix *out) {
    CallMethod<0x46DCA0>(this, out);
}