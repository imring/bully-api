#include "tools/bully.hpp"

#include "Loading.hpp"

using namespace bullyapi;

bool &Loading::LoadOnlyRequiredIDE = *reinterpret_cast<bool*>(0xBF3810);
bool &Loading::bFinishedInitialLoad = *reinterpret_cast<bool*>(0xBF3818); // maybe wrong