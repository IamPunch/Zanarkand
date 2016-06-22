#include "_PartyStatus.h"
/*
    Key : Byte Value
    Value : Corresponding Status
*/
std::map<uint8_t, std::string> _PartyStatus = {
    { 0x00, "Disabled" },
    { 0x11, "In Party" },
    { 0x10, "Not In Party" }
};