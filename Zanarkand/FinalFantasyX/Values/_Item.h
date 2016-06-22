#ifndef  _ITEM_H
#define _ITEM_H
#include <map>
#include <string>
struct ItemObject
{
    std::string name;
    std::string description;
};

extern std::map<uint16_t, ItemObject> _Item;
#endif