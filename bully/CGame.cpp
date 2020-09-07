#include "tools/bully.hpp"

#include "CGame.hpp"

using namespace bullyapi;

char *CGame::aDatFile = reinterpret_cast<char*>(0xBD0FA4);

bool CGame::Initialise(const char *szDatFile) {
    return Call<0x42EFE0, bool>(szDatFile);
}