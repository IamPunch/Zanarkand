#include "Lulu.h"
#include "../Guardian.h"
#include "../../../../MemoryData/CharacterData.h"
Lulu::Lulu() : Guardian(5) {};
uint32_t Lulu::getAffectionTowardsTidus() {
    return characterAffectionStructureArray[5]->value;
};