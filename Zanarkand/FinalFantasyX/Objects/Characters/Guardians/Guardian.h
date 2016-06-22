#ifndef GUARDIAN_H
#define GUARDIAN_H
#include "../../../Values/Values.h"
#include <string>
#include <vector>
class Guardian {
private:
    int index;
protected:
    Guardian(int index);
public:
    uint32_t getBaseHP();
    uint32_t getBaseMP();
    uint8_t getBaseStrength();
    uint8_t getBaseDefense();
    uint8_t getBaseMagic();
    uint8_t getBaseMagicDefense();
    uint8_t getBaseAgility();
    uint8_t getBaseLuck();
    uint8_t getBaseEvasion();
    uint8_t getBaseAccuracy();
    uint32_t getTotalAbilityPoints();
    uint32_t getCurrentEarnedAbilityPoints();
    uint32_t getCurrentHP();
    uint32_t getCurrentMP();
    uint32_t getCurrentMaxHP();
    uint32_t getCurrentMaxMP();
    uint8_t getPartyStatusId();
    uint8_t getEquippedWeaponSlotIndex();
    uint8_t getEquippedArmorSlotIndex();
    uint8_t getCurrentStrength();
    uint8_t getCurrentDefense();
    uint8_t getCurrentMagic();
    uint8_t getCurrentMagicDefense();
    uint8_t getCurrentAgility();
    uint8_t getCurrentLuck();
    uint8_t getCurrentEvasion();
    uint8_t getCurrentAccuracy();
    uint8_t getPoisonDamage(); // TODO: What is this?
    uint8_t getCurrentOverdriveModeId();
    uint8_t getCurrentOverdrivePoints();
    uint8_t getCurrentMaxOverdrivePoints();
    uint8_t getCurrentSphereLevel();
    uint8_t getUsedSphereLevelCount();
    uint8_t* getSkillByteArray();
    uint32_t getTotalBattlesFought();
    uint32_t getTotalMonsterDefeated();
    uint32_t getTotalDeath();
    uint16_t getOverdriveWarriorLeftCount();
    uint16_t getOverdriveComradeLeftCount();
    uint16_t getOverdriveStoicLeftCount();
    uint16_t getOverdriveHealerLeftCount();
    uint16_t getOverdriveTacticianLeftCount();
    uint16_t getOverdriveVictimLeftCount();
    uint16_t getOverdriveDancerLeftCount();
    uint16_t getOverdriveAvengerLeftCount();
    uint16_t getOverdriveSlayerLeftCount();
    uint16_t getOverdriveHeroLeftCount();
    uint16_t getOverdriveRookLeftCount();
    uint16_t getOverdriveVictorLeftCount();
    uint16_t getOverdriveCowardLeftCount();
    uint16_t getOverdriveAllyLeftCount();
    uint16_t getOverdriveSuffererLeftCount();
    uint16_t getOverdriveDaredevilLeftCount();
    uint16_t getOverdriveLonerLeftCount();
    uint8_t* getOverdriveModeByteArray();
    std::string getPartyStatus();
	OverdriveModeObject getCurrentOverdriveModeObject();
    std::vector<std::string> getAvailableSkillNameArray();
    std::vector<AbilityObject> getAvailableSkillArray();
    std::vector<std::string> getAvailableOverdriveModeArray();
    std::string getName();
};
#endif