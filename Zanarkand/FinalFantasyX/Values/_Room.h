#ifndef  _ROOM_H
#define _ROOM_H
#include <map>
#include <string>
struct RoomObject
{
	std::string name;
};

extern std::map<uint16_t, RoomObject> _Room;
#endif