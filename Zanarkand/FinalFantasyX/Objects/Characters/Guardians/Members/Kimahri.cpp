#include "Kimahri.h"
#include "../Guardian.h"
#include "../../../../MemoryData/CharacterData.h"
Kimahri::Kimahri() : Guardian(3) {};
uint32_t Kimahri::getAffectionTowardsTidus() {
    return characterAffectionStructureArray[3]->value;
};