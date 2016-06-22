#ifndef CHARACTER_DATA_H
#define CHARACTER_DATA_H
#include <string>
#pragma pack(push, 1)
struct CharacterData
{
    uint32_t baseHP;
    uint32_t baseMP;
    uint8_t baseStrength;
    uint8_t baseDefense;
    uint8_t baseMagic;
    uint8_t baseMagicDefense;
    uint8_t baseAgility;
    uint8_t baseLuck;
    uint8_t baseEvasion;
    uint8_t baseAccuracy;
    uint32_t totalAbilityPoints;
    uint32_t currentEarnedAbilityPoints;
    uint32_t currentHP;
    uint32_t currentMP;
    uint32_t currentMaxHP;
    uint32_t currentMaxMP;
    uint8_t partyStatusId;
    uint8_t equippedWeaponSlotIndex;
    uint8_t equippedArmorSlotIndex;
    uint8_t currentStrength;
    uint8_t currentDefense;
    uint8_t currentMagic;
    uint8_t currentMagicDefense;
    uint8_t currentAgility;
    uint8_t currentLuck;
    uint8_t currentEvasion;
    uint8_t currentAccuracy;
    uint8_t poisonDamage; // TODO: What is this?
    uint8_t currentOverdriveModeId;
    uint8_t currentOverdrivePoints;
    uint8_t currentMaxOverdrivePoints;
    uint8_t currentSphereLevel;
    uint8_t usedSphereLevelCount;
    uint8_t unknown_1; // TODO: What is this?
    uint8_t skillByteArray[12]; // TODO: Skill index 87
    uint8_t unknownChunk_1[6]; // TODO: What is this?
    uint32_t totalBattlesFought;
    uint32_t totalMonsterDefeated;
    uint32_t totalDeath;
    uint8_t unknownChunk_2[4]; // TODO: What is this? Some kind of count?
    uint16_t overdriveWarriorLeftCount;
    uint16_t overdriveComradeLeftCount;
    uint16_t overdriveStoicLeftCount;
    uint16_t overdriveHealerLeftCount;
    uint16_t overdriveTacticianLeftCount;
    uint16_t overdriveVictimLeftCount;
    uint16_t overdriveDancerLeftCount;
    uint16_t overdriveAvengerLeftCount;
    uint16_t overdriveSlayerLeftCount;
    uint16_t overdriveHeroLeftCount;
    uint16_t overdriveRookLeftCount;
    uint16_t overdriveVictorLeftCount;
    uint16_t overdriveCowardLeftCount;
    uint16_t overdriveAllyLeftCount;
    uint16_t overdriveSuffererLeftCount;
    uint16_t overdriveDaredevilLeftCount;
    uint16_t overdriveLonerLeftCount;
    uint16_t overdriveUnkown1LeftCount;
    uint16_t overdriveUnkown2LeftCount;
    uint16_t overdriveAeonsOnlyLeftCount;
    uint8_t overdriveModeByteArray[3];
    uint8_t unknownChunk_3[13];  // TODO: What is this?
};
struct CharacterName
{
    uint8_t charByteArray[20];
};
struct CharacterAffection
{
    uint32_t value;
};
#pragma pack(pop)

extern uint8_t* characterDataBuffer;
extern CharacterData* characterDataStructureArray[];
void retrieveCharacterData();

extern uint8_t* characterNameBuffer;
extern CharacterName* characterNameStructureArray[];
void retrieveCharacterName();

extern uint8_t* characterAffectionBuffer;
extern CharacterAffection* characterAffectionStructureArray[];
void retrieveCharacterAffection();
#endif