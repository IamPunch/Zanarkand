#ifndef DEBUG_DATA_H
#define DEBUG_DATA_H
#include <string>
#pragma pack(push, 1)
struct DebugData {
	uint8_t invincibleEnemy;
	uint8_t invincibleCharacter;
	uint8_t controlEnemy;
	uint8_t unknown_1;
	uint8_t freeCamera;
	uint8_t unknown_2;
	uint8_t unknown_3;
	uint8_t unknown_4;
	uint8_t disableAttackAnimation;
	uint8_t unlimitedMP;
	uint8_t unknown_5;
	uint8_t unknown_6;
	uint8_t unknown_7;
	uint8_t unknown_8;
	uint8_t unknown_9;
	uint8_t unknown_10;
	uint8_t disableRandomVarianceOnDamage;
	uint8_t disableCriticalHit;
	uint8_t unknown_11;
	uint8_t unknown_12;
	uint8_t unlimitedOverdrives;
	uint8_t alwaysCriticalHit;
	uint8_t everythingDoes1Damage;
	uint8_t everythingDoes9999Damage;
	uint8_t everythingDoes99999Damage;
	uint8_t alwaysRareDropAndSteal;
	uint8_t abilityPointsMultiplier100;
	uint8_t gilMultiplier100;
	uint8_t disableOverkill;
	uint8_t alwaysSensor;
	uint8_t unknown_13;
	uint8_t unknown_14;
	uint8_t unknown_15;
	uint8_t unknown_16;
	uint8_t unknown_17;
	uint8_t displayBattlefieldCoordinateGrid;
	uint8_t unknown_18;
	uint8_t playerAlways1HP;
	uint8_t enemyAlways1HP;
	uint8_t negateAbility; //All evadable abilities miss + status effects never inflicted
	uint8_t unknown_19;
	uint8_t unknown_20;
	uint8_t unknown_21;
	uint8_t battleBehavior; // 01 = Always Preemptive Strike, 02 = Always Ambush, 03 = Never Preemptive Strike or Ambush
};
#pragma pack(pop)
#endif