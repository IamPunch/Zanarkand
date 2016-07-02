#ifndef  _TREASURE_H
#define _TREASURE_H
#include <map>
#include <string>
#include <vector>
enum TreasureType
{
	CHEST,
	ITEM,
	NPC
};

struct TreasureObject
{
	uint32_t offset;
	uint8_t bitIndex;
	TreasureType type;
	std::string location;
	std::string name;
	int quantity;
	std::string notes;
	bool missable;
};
extern std::vector<TreasureObject> _Treasure;
#endif