#include "../Process/Process.h"
#include "../MemoryData/CharacterData.h"
#include "../Offset.h"

uint8_t* characterDataBuffer;
CharacterData* characterDataStructureArray[18] = {};
void retrieveCharacterData() {
    int structSize = 148; /* Bytes */
    characterDataBuffer = Process::memoryReadChunk((int)Offset::CHARACTER_DATA, structSize * 18);
    for (int i = 0; i < 18; ++i) {
        characterDataStructureArray[i] = (CharacterData*)(characterDataBuffer + i * structSize);
    }
};

uint8_t* characterNameBuffer;
CharacterName* characterNameStructureArray[18] = {};
void retrieveCharacterName() {
    int structSize = 20; /* Bytes */
    characterNameBuffer = Process::memoryReadChunk((int)Offset::CHARACTER_NAME, structSize * 18);
    for (int i = 0; i < 18; ++i) {
        characterNameStructureArray[i] = (CharacterName*)(characterNameBuffer + i * structSize);
    }
};

uint8_t* characterAffectionBuffer;
CharacterAffection* characterAffectionStructureArray[8] = {};
void retrieveCharacterAffection() {
    int structSize = 4; /* Bytes */
    characterAffectionBuffer = Process::memoryReadChunk((int)Offset::CHARACTER_AFFECTION, structSize * 8);
    for (int i = 0; i < 8; ++i) {
        characterAffectionStructureArray[i] = (CharacterAffection*)(characterAffectionBuffer + i * structSize);
    }
};