#include "Yuna.h"
#include "../Guardian.h"
#include "../../../../MemoryData/CharacterData.h"
Yuna::Yuna() : Guardian(1) {};
uint32_t Yuna::getAffectionTowardsTidus() {
    return characterAffectionStructureArray[1]->value;
};