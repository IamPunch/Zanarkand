#include "Seymour.h"
#include "../Guardian.h"
#include "../../../../MemoryData/CharacterData.h"
Seymour::Seymour() : Guardian(7) {};
uint32_t Seymour::getAffectionTowardsTidus() {
    return characterAffectionStructureArray[7]->value;
};