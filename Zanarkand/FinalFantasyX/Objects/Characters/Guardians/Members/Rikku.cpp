#include "Rikku.h"
#include "../Guardian.h"
#include "../../../../MemoryData/CharacterData.h"
Rikku::Rikku() : Guardian(6) {};
uint32_t Rikku::getAffectionTowardsTidus() {
    return characterAffectionStructureArray[6]->value;
};