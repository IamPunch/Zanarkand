#ifndef  _KEY_ITEM_H
#define _KEY_ITEM_H
#include <map>
#include <string>
struct KeyItemObject
{
	std::string name;
	std::string description;
};

extern std::map<uint16_t, KeyItemObject> _KeyItem;
#endif