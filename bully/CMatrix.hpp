#pragma once

#include "CVector.hpp"

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
    void UpdateRw(RwMatrix *mat);

    void operator=(const CMatrix &rvalue);
};

};