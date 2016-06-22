#ifndef  _OVERDRIVE_H
#define _OVERDRIVE_H
#include <map>
#include <string>
enum OverdriveType
{
	TIDUS,
	YUNA,
	AURON,
	KIMAHRI,
	WAKKA,
	LULU,
	RIKKU,
	SEYMOUR,
	VALEFOR,
	IFRIT,
	IXION,
	SHIVA,
	BAHAMUT,
	YOJIMBO,
	ANIMA,
	MAGUS_SISTERS
};

struct OverdriveObject
{
	OverdriveType type;
	std::string name;
	std::string description;
};
extern std::map<uint16_t, OverdriveObject> _Overdrive;
#endif