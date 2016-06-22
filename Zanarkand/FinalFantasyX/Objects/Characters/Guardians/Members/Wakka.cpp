#include "Wakka.h"
#include "../Guardian.h"
#include "../../../../MemoryData/CharacterData.h"
Wakka::Wakka() : Guardian(4) {};
uint32_t Wakka::getAffectionTowardsTidus() {
    return characterAffectionStructureArray[4]->value;
};