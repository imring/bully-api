#pragma once

namespace bullyapi {

class CGame {
public:
    static char *aDatFile; // 32
    
    static bool Initialise(const char *szDatFile);
};

};