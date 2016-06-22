#include "Auron.h"
#include "../Guardian.h"
#include "../../../../MemoryData/CharacterData.h"
Auron::Auron() : Guardian(2) {};
uint32_t Auron::getAffectionTowardsTidus() {
    return characterAffectionStructureArray[2]->value;
};