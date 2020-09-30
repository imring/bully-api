#include "tools/bully.hpp"

#include "CWorld.hpp"

using namespace bullyapi;

CPlayerPed *CWorld::Player = *reinterpret_cast<CPlayerPed**>(0xC1AEA8);

void CWorld::Initialise() {
    Call<0x45D580>();
}