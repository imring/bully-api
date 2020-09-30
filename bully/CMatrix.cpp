#include "tools/bully.hpp"

#include "CMatrix.hpp"

using namespace bullyapi;

void CMatrix::SetUnity() {
    CallMethod<0x412770>(this);
}

void CMatrix::ResetOrientation() {
    CallMethod<0x4127A0>(this);
}

void CMatrix::SetRotateXOnly(float rot) {
    CallMethod<0x412B60>(this, rot);
}

void CMatrix::SetRotateYOnly(float rot) {
    CallMethod<0x412BC0>(this, rot);
}

void CMatrix::SetRotateZOnly(float rot) {
    CallMethod<0x412C20>(this, rot);
}

void CMatrix::SetRotateX(float rot) {
    CallMethod<0x412CA0>(this, rot);
}

void CMatrix::SetRotateY(float rot) {
    CallMethod<0x412CC0>(this, rot);
}

void CMatrix::SetRotateZ(float rot) {
    CallMethod<0x412CE0>(this, rot);
}

void CMatrix::SetRotate(const CVector &vec) {
    CallMethod<0x412D00>(this, vec);
}

void CMatrix::SetRotate(const CQuaternion &quat) {
    CallMethod<0x412E40>(this, quat);
}

void CMatrix::RotateX(float rot) {
    CallMethod<0x413020>(this, rot);
}

void CMatrix::RotateY(float rot) {
    CallMethod<0x413120>(this, rot);
}

void CMatrix::RotateZ(float rot) {
    CallMethod<0x413220>(this, rot);
}

void CMatrix::Rotate(const CVector &vec) {
    CallMethod<0x413320>(this, vec);
}

void CMatrix::UpdateRw(RwMatrix *mat) {
    CallMethod<0x413A70>(this, mat);
}

void CMatrix::operator=(const CMatrix &rvalue) {
    CallMethod<0x412720>(this, rvalue);
}

void CMatrix::operator*=(const CMatrix &rvalue) {
    CallMethod<0x412800>(this, rvalue);
}