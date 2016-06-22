#ifndef  _ABILITY_H
#define _ABILITY_H
#include <map>
#include <string>
enum AbilityType
{
   COMMAND,
   SKILL,
   SPECIAL,
   WHITE_MAGIC,
   BLACK_MAGIC,
   AEON_COMMAND
};

struct AbilityObject
{
    AbilityType type;
	std::string name;
	std::string description;
 };
extern std::map<uint16_t, AbilityObject> _Ability;
#endif