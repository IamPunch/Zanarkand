#include "Aeon.h"
#include "../../../MemoryData/CharacterData.h"
#include "../../../Values/Values.h"
#include "../../../Utility/Utility.h"
#include <bitset>
#include <iostream>
Aeon::Aeon(int index) : index(index) {};
uint32_t Aeon::getBaseHP() {
	return characterDataStructureArray[index]->baseHP;
};
uint32_t Aeon::getBaseMP() {
	return characterDataStructureArray[index]->baseMP;
};
uint8_t Aeon::getBaseStrength() {
	return characterDataStructureArray[index]->baseStrength;
};
uint8_t Aeon::getBaseDefense() {
	return characterDataStructureArray[index]->baseDefense;
};
uint8_t Aeon::getBaseMagic() {
	return characterDataStructureArray[index]->baseMagic;
};
uint8_t Aeon::getBaseMagicDefense() {
	return characterDataStructureArray[index]->baseMagicDefense;
};
uint8_t Aeon::getBaseAgility() {
	return characterDataStructureArray[index]->baseAgility;
};
uint8_t Aeon::getBaseLuck() {
	return characterDataStructureArray[index]->baseLuck;
};
uint8_t Aeon::getBaseEvasion() {
	return characterDataStructureArray[index]->baseEvasion;
};
uint8_t Aeon::getBaseAccuracy() {
	return characterDataStructureArray[index]->baseAccuracy;
};
uint32_t Aeon::getTotalAbilityPoints() {
	return characterDataStructureArray[index]->totalAbilityPoints;
};
uint32_t Aeon::getCurrentEarnedAbilityPoints() {
	return characterDataStructureArray[index]->currentEarnedAbilityPoints;
};
uint32_t Aeon::getCurrentHP() {
	return characterDataStructureArray[index]->currentHP;
};
uint32_t Aeon::getCurrentMP() {
	return characterDataStructureArray[index]->currentMP;
};
uint32_t Aeon::getCurrentMaxHP() {
	return characterDataStructureArray[index]->currentMaxHP;
};
uint32_t Aeon::getCurrentMaxMP() {
	return characterDataStructureArray[index]->currentMaxMP;
};
uint8_t Aeon::getPartyStatusId() {
	return characterDataStructureArray[index]->partyStatusId;
};
uint8_t Aeon::getEquippedWeaponSlotIndex() {
	return characterDataStructureArray[index]->equippedArmorSlotIndex;
};
uint8_t Aeon::getEquippedArmorSlotIndex() {
	return characterDataStructureArray[index]->equippedArmorSlotIndex;
};
uint8_t Aeon::getCurrentStrength() {
	return characterDataStructureArray[index]->currentStrength;
};
uint8_t Aeon::getCurrentDefense() {
	return characterDataStructureArray[index]->currentDefense;
};
uint8_t Aeon::getCurrentMagic() {
	return characterDataStructureArray[index]->currentMagic;
};
uint8_t Aeon::getCurrentMagicDefense() {
	return characterDataStructureArray[index]->currentMagicDefense;
};
uint8_t Aeon::getCurrentAgility() {
	return characterDataStructureArray[index]->currentAgility;
};
uint8_t Aeon::getCurrentLuck() {
	return characterDataStructureArray[index]->currentLuck;
};
uint8_t Aeon::getCurrentEvasion() {
	return characterDataStructureArray[index]->currentEvasion;
};
uint8_t Aeon::getCurrentAccuracy() {
	return characterDataStructureArray[index]->currentAccuracy;
};
uint8_t Aeon::getPoisonDamage() {
	return characterDataStructureArray[index]->poisonDamage;
};
uint8_t Aeon::getCurrentOverdriveModeId() {
	return characterDataStructureArray[index]->currentOverdriveModeId;
};
uint8_t Aeon::getCurrentOverdrivePoints() {
	return characterDataStructureArray[index]->currentMaxOverdrivePoints;
};
uint8_t Aeon::getCurrentMaxOverdrivePoints() {
	return characterDataStructureArray[index]->currentMaxOverdrivePoints;
};
uint8_t Aeon::getCurrentSphereLevel() {
	return characterDataStructureArray[index]->currentSphereLevel;
};
uint8_t Aeon::getUsedSphereLevelCount() {
	return characterDataStructureArray[index]->usedSphereLevelCount;
};
uint8_t* Aeon::getSkillByteArray() {
	return characterDataStructureArray[index]->skillByteArray;
};
uint32_t Aeon::getTotalBattlesFought() {
	return characterDataStructureArray[index]->totalBattlesFought;
};
uint32_t Aeon::getTotalMonsterDefeated() {
	return characterDataStructureArray[index]->totalMonsterDefeated;
};
uint32_t Aeon::getTotalDeath() {
	return characterDataStructureArray[index]->totalDeath;
};
uint16_t Aeon::getOverdriveAeonsOnlyLeftCount() {
	return characterDataStructureArray[index]->overdriveAeonsOnlyLeftCount;
};
uint8_t* Aeon::getOverdriveModeByteArray() {
	return characterDataStructureArray[index]->overdriveModeByteArray;
};
std::string Aeon::getPartyStatus() {
	return _PartyStatus.find(getPartyStatusId())->second;
};
OverdriveModeObject Aeon::getCurrentOverdriveModeObject() {
	return _OverdriveMode.find(getCurrentOverdriveModeId())->second;
};
std::vector<std::string> Aeon::getAvailableSkillArray() {
	uint8_t* skillByteArray = characterDataStructureArray[index]->skillByteArray;
	const int size = 12;
	const int bitSetSize = 12 * 8;
	std::bitset<bitSetSize> bitArray;
	std::vector<std::string> results;
	bytesToBitset<size>(skillByteArray, bitArray);
	for (int i = 0; i < bitSetSize; i++) {
		if (bitArray.test(i)) {
			results.push_back(_Ability.find(i)->second.name);
		}
	}
	return results;
};

//std::vector<std::string> Aeon::getAvailableOverdriveModeArray() {
//    uint8_t* overdriveModeByteArray = characterDataStructureArray[index]->overdriveModeByteArray;
//    const int size = 3;
//    const int bitSetSize = size * 8;
//    std::bitset<bitSetSize> bitArray;
//    std::vector<std::string> results;
//    bytesToBitset<size>(overdriveModeByteArray, bitArray);
//    for (int i = 0; i < bitSetSize; i++) {
//        if (bitArray.test(i)) {
//            results.push_back(_OverdriveMode.find(i)->second);
//        }
//    }
//    return results;
//};
std::string Aeon::getName() {
	uint8_t* charByteArray = characterNameStructureArray[index]->charByteArray;
	const int size = 20;
	std::string result = "";
	for (int i = 0; i < 20; i++) {
		if (charByteArray[i] == 0) return result;
		if (_CharEncoding.find(charByteArray[i]) != _CharEncoding.end()) {
			result += _CharEncoding.find(charByteArray[i])->second;
		}
	}
	return result;
};