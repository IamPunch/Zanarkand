#include "_OverdriveMode.h"
/*
    Key : Bit Index for OverdriveModeByteArray and Byte Value for OverdriveModeId
    Value : Overdrive Mode Object { std::string name, std::string name }
*/
std::map<uint8_t, OverdriveModeObject> _OverdriveMode = {
	{ 0, { "Warrior", "Charges when character damages enemy." } },
	{ 1, { "Comrade", "Charges when allies take damage." } },
	{ 2, { "Stoic", "Charges when character takes damage." } },
	{ 3, { "Healer", "Charges when character heals allies." } },
	{ 4, { "Tactician", "Charges when status attack succeeds." } },
	{ 5, { "Victim", "Charges when character hit with status attack." } },
	{ 6, { "Dancer", "Charges when character evades attack." } },
	{ 7, { "Avenger", "Charges when allies are KO'd." } },
	{ 8, { "Slayer", "Charges when character defeats an enemy." } },
	{ 9, { "Hero", "Charges when character defeats powerful enemy." } },
	{ 10, { "Rook", "Charges when character magically blocks attack." } },
	{ 11, { "Victor", "Charges when party wins a battle." } },
	{ 12, { "Coward", "Charges when character flees from battle." } },
	{ 13, { "Ally", "Charges on character's turn." } },
	{ 14, { "Sufferer", "Charges while character suffers status ailments." } },
	{ 15, { "Daredevil", "Charges while character fights with low HP." } },
	{ 16, { "Loner", "Charges when character fights alone." } },
	{ 17, { "-", "-" } },
	{ 18, { "-", "-" } },
	{ 19, { "Aeons Only", "-" } }
};