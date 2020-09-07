#pragma once

namespace bullyapi {

class CEntity;

class CReference {
public:
    CReference *m_pNext;
    CEntity   **m_ppEntity;
};

};