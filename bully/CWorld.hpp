#pragma once

#include "CPlayerPed.hpp"

namespace bullyapi {

class CWorld {
public:
    static CPlayerPed *Player;

    static void Initialise();
};

};