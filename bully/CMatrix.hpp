#pragma once

#include "CVector.hpp"
#include "CQuaternion.hpp"

namespace bullyapi {

class RwMatrix;

class CMatrix {
public:
    CVector      right;
    unsigned int flags;
    CVector      up;
    unsigned int pad1;
    CVector      at;
    unsigned int pad2;
    CVector      pos;
    unsigned int pad3;
    RwMatrix    *m_pAttachMatrix;

    void SetUnity();
    void ResetOrientation();
    void SetRotateXOnly(float rot);
    void SetRotateYOnly(float rot);
    void SetRotateZOnly(float rot);
    void SetRotateX(float rot);
    void SetRotateY(float rot);
    void SetRotateZ(float rot);
    void SetRotate(const CVector &vec);
    void SetRotate(const CQuaternion &quat);
    void RotateX(float rot);
    void RotateY(float rot);
    void RotateZ(float rot);
    void Rotate(const CVector &vec);
    void UpdateRw(RwMatrix *mat);

    void operator=(const CMatrix &rvalue);
    void operator*=(const CMatrix &rvalue);
};

};