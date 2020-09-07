#include "tools/bully.hpp"

#include "CEntity.hpp"

using namespace bullyapi;

void CEntityFlags::Clear() {
    CallMethod<0x468BC0>(this);
}

CEntity::CEntity() {
    CallMethod<0x4656A0>(this);
}

bool CEntity::HasPreRenderEffects() {
    return CallMethod<0x465780, bool>(this);
}

void CEntity::RegisterReference(CEntity **pEntity) {
    CallMethod<0x450880>(this, pEntity);
}

void CEntity::CleanUpOldReference(CEntity **pEntity) {
    CallMethod<0x4508D0>(this, pEntity);
}

void CEntity::ResolveReferences() {
    CallMethod<0x450910>(this);
}

void CEntity::PruneReferences() {
    CallMethod<0x450970>(this);
}