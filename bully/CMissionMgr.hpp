#pragma once

namespace bullyapi {

class CMissionMgr {
public:
    static CMissionMgr &g_MissionMgr;

    void Init(const char *arg0, const char *arg1);
};

};