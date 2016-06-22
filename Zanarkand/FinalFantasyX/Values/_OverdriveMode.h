#ifndef  _OVERDRIVE_MODE_H
#define _OVERDRIVE_MODE_H
#include <map>
#include <string>
struct OverdriveModeObject
{
    std::string name;
    std::string description;
};
extern std::map<uint8_t, OverdriveModeObject> _OverdriveMode;
#endif