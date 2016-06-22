#ifndef  _AUTO_ABILITY_H
#define _AUTO_ABILITY_H
#include <map>
#include <string>
struct AutoAbilityObject
{
	std::string name;
	std::string description;
};

extern std::map<uint16_t, AutoAbilityObject> _AutoAbilityIndex;
#endif