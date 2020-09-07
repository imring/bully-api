#include "tools/bully.hpp"

#include "CMissionMgr.hpp"

using namespace bullyapi;

CMissionMgr &CMissionMgr::g_MissionMgr = *reinterpret_cast<CMissionMgr*>(0x20C3CA0);

void CMissionMgr::Init(const char *arg0, const char *arg1) {
    CallMethod<0x6AC730>(this, arg0, arg1);
}