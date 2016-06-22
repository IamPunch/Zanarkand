#include "Guardian.h"
#include "../../../MemoryData/CharacterData.h"
#include "../../../Values/Values.h"
#include "../../../Utility/Utility.h"
#include <bitset>
Guardian::Guardian(int index) : index(index) {};
uint32_t Guardian::getBaseHP() {
	return characterDataStructureArray[index]->baseHP;
};
uint32_t Guardian::getBaseMP() {
	return characterDataStructureArray[index]->baseMP;
};
uint8_t Guardian::getBaseStrength() {
	return characterDataStructureArray[index]->baseStrength;
};
uint8_t Guardian::getBaseDefense() {
	return characterDataStructureArray[index]->baseDefense;
};
uint8_t Guardian::getBaseMagic() {
	return characterDataStructureArray[index]->baseMagic;
};
uint8_t Guardian::getBaseMagicDefense() {
	return characterDataStructureArray[index]->baseMagicDefense;
};
uint8_t Guardian::getBaseAgility() {
	return characterDataStructureArray[index]->baseAgility;
};
uint8_t Guardian::getBaseLuck() {
	return characterDataStructureArray[index]->baseLuck;
};
uint8_t Guardian::getBaseEvasion() {
	return characterDataStructureArray[index]->baseEvasion;
};
uint8_t Guardian::getBaseAccuracy() {
	return characterDataStructureArray[index]->baseAccuracy;
};
uint32_t Guardian::getTotalAbilityPoints() {
	return characterDataStructureArray[index]->totalAbilityPoints;
};
uint32_t Guardian::getCurrentEarnedAbilityPoints() {
	return characterDataStructureArray[index]->currentEarnedAbilityPoints;
};
uint32_t Guardian::getCurrentHP() {
	return characterDataStructureArray[index]->currentHP;
};
uint32_t Guardian::getCurrentMP() {
	return characterDataStructureArray[index]->currentMP;
};
uint32_t Guardian::getCurrentMaxHP() {
	return characterDataStructureArray[index]->currentMaxHP;
};
uint32_t Guardian::getCurrentMaxMP() {
	return characterDataStructureArray[index]->currentMaxMP;
};
uint8_t Guardian::getPartyStatusId() {
	return characterDataStructureArray[index]->partyStatusId;
};
uint8_t Guardian::getEquippedWeaponSlotIndex() {
	return characterDataStructureArray[index]->equippedArmorSlotIndex;
};
uint8_t Guardian::getEquippedArmorSlotIndex() {
	return characterDataStructureArray[index]->equippedArmorSlotIndex;
};
uint8_t Guardian::getCurrentStrength() {
	return characterDataStructureArray[index]->currentStrength;
};
uint8_t Guardian::getCurrentDefense() {
	return characterDataStructureArray[index]->currentDefense;
};
uint8_t Guardian::getCurrentMagic() {
	return characterDataStructureArray[index]->currentMagic;
};
uint8_t Guardian::getCurrentMagicDefense() {
	return characterDataStructureArray[index]->currentMagicDefense;
};
uint8_t Guardian::getCurrentAgility() {
	return characterDataStructureArray[index]->currentAgility;
};
uint8_t Guardian::getCurrentLuck() {
	return characterDataStructureArray[index]->currentLuck;
};
uint8_t Guardian::getCurrentEvasion() {
	return characterDataStructureArray[index]->currentEvasion;
};
uint8_t Guardian::getCurrentAccuracy() {
	return characterDataStructureArray[index]->currentAccuracy;
};
uint8_t Guardian::getPoisonDamage() {
	return characterDataStructureArray[index]->poisonDamage;
};
uint8_t Guardian::getCurrentOverdriveModeId() {
	return characterDataStructureArray[index]->currentOverdriveModeId;
};
uint8_t Guardian::getCurrentOverdrivePoints() {
	return characterDataStructureArray[index]->currentMaxOverdrivePoints;
};
uint8_t Guardian::getCurrentMaxOverdrivePoints() {
	return characterDataStructureArray[index]->currentMaxOverdrivePoints;
};
uint8_t Guardian::getCurrentSphereLevel() {
	return characterDataStructureArray[index]->currentSphereLevel;
};
uint8_t Guardian::getUsedSphereLevelCount() {
	return characterDataStructureArray[index]->usedSphereLevelCount;
};
uint8_t* Guardian::getSkillByteArray() {
	return characterDataStructureArray[index]->skillByteArray;
};
uint32_t Guardian::getTotalBattlesFought() {
	return characterDataStructureArray[index]->totalBattlesFought;
};
uint32_t Guardian::getTotalMonsterDefeated() {
	return characterDataStructureArray[index]->totalMonsterDefeated;
};
uint32_t Guardian::getTotalDeath() {
	return characterDataStructureArray[index]->totalDeath;
};
uint16_t Guardian::getOverdriveWarriorLeftCount() {
	return characterDataStructureArray[index]->overdriveWarriorLeftCount;
};
uint16_t Guardian::getOverdriveComradeLeftCount() {
	return characterDataStructureArray[index]->overdriveComradeLeftCount;
};
uint16_t Guardian::getOverdriveStoicLeftCount() {
	return characterDataStructureArray[index]->overdriveStoicLeftCount;
};
uint16_t Guardian::getOverdriveHealerLeftCount() {
	return characterDataStructureArray[index]->overdriveHealerLeftCount;
};
uint16_t Guardian::getOverdriveTacticianLeftCount() {
	return characterDataStructureArray[index]->overdriveTacticianLeftCount;
};
uint16_t Guardian::getOverdriveVictimLeftCount() {
	return characterDataStructureArray[index]->overdriveVictimLeftCount;
};
uint16_t Guardian::getOverdriveDancerLeftCount() {
	return characterDataStructureArray[index]->overdriveDancerLeftCount;
};
uint16_t Guardian::getOverdriveAvengerLeftCount() {
	return characterDataStructureArray[index]->overdriveAvengerLeftCount;
};
uint16_t Guardian::getOverdriveSlayerLeftCount() {
	return characterDataStructureArray[index]->overdriveSlayerLeftCount;
};
uint16_t Guardian::getOverdriveHeroLeftCount() {
	return characterDataStructureArray[index]->overdriveHeroLeftCount;
};
uint16_t Guardian::getOverdriveRookLeftCount() {
	return characterDataStructureArray[index]->overdriveRookLeftCount;
};
uint16_t Guardian::getOverdriveVictorLeftCount() {
	return characterDataStructureArray[index]->overdriveVictorLeftCount;
};
uint16_t Guardian::getOverdriveCowardLeftCount() {
	return characterDataStructureArray[index]->overdriveCowardLeftCount;
};
uint16_t Guardian::getOverdriveAllyLeftCount() {
	return characterDataStructureArray[index]->overdriveAllyLeftCount;
};
uint16_t Guardian::getOverdriveSuffererLeftCount() {
	return characterDataStructureArray[index]->overdriveSuffererLeftCount;
};
uint16_t Guardian::getOverdriveDaredevilLeftCount() {
	return characterDataStructureArray[index]->overdriveDaredevilLeftCount;
};
uint16_t Guardian::getOverdriveLonerLeftCount() {
	return characterDataStructureArray[index]->overdriveLonerLeftCount;
};
uint8_t* Guardian::getOverdriveModeByteArray() {
	return characterDataStructureArray[index]->overdriveModeByteArray;
};
std::string Guardian::getPartyStatus() {
	return _PartyStatus.find(getPartyStatusId())->second;
};
OverdriveModeObject Guardian::getCurrentOverdriveModeObject() {
	return _OverdriveMode.find(getCurrentOverdriveModeId())->second;
};

std::vector<std::string> Guardian::getAvailableSkillNameArray() {
	uint8_t* skillByteArray = characterDataStructureArray[index]->skillByteArray;
	const int size = 12;
	const int bitSetSize = 12 * 8;
	std::bitset<bitSetSize> bitArray;
	std::vector<std::string> results;
	bytesToBitset<size>(skillByteArray, bitArray);
	for (int i = 0; i < bitSetSize; i++) {
		if (bitArray.test(i)) {
			if (_Ability.find(i) != _Ability.end()) {
				results.push_back(_Ability.find(i)->second.name);
			}
		}
	}
	return results;
};
std::vector<AbilityObject> Guardian::getAvailableSkillArray() {
	uint8_t* skillByteArray = characterDataStructureArray[index]->skillByteArray;
	const int size = 12;
	const int bitSetSize = 12 * 8;
	std::bitset<bitSetSize> bitArray;
	std::vector<AbilityObject> results;
	bytesToBitset<size>(skillByteArray, bitArray);
	for (int i = 0; i < bitSetSize; i++) {
		if (bitArray.test(i)) {
			if (_Ability.find(i) != _Ability.end()) {
				results.push_back(_Ability.find(i)->second);
			}
		}
	}
	return results;
};
//std::vector<std::string> Guardian::getAvailableOverdriveModeArray() {
//	uint8_t* overdriveModeByteArray = characterDataStructureArray[index]->overdriveModeByteArray;
//	const int size = 3;
//	const int bitSetSize = size * 8;
//	std::bitset<bitSetSize> bitArray;
//	std::vector<std::string> results;
//	bytesToBitset<size>(overdriveModeByteArray, bitArray);
//	for (int i = 0; i < bitSetSize; i++) {
//		if (bitArray.test(i)) {
//			results.push_back(_OverdriveMode.find(i)->second);
//		}
//	}
//	return results;
//};
std::string Guardian::getName() {
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