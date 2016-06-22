#include "Miscellaneous.h"
#include "../../Process/Process.h"
//13814352
int Miscellaneous::getCurrentGil() {
    return Process::memoryReadInt(0xD307D8);
}
int Miscellaneous::getCurrentRoomID() {
    return Process::memoryReadInt(0xD2CA90);
}
int Miscellaneous::getTidusOverdriveCount() {
    return Process::memoryReadInt(0xD3083C);
}
int Miscellaneous::getRikkuStealCount() {
    return Process::memoryReadInt(0xD30840);
}    
int Miscellaneous::getTotalLightningStruckCount() {
    //0204CE8C
    return Process::memoryReadInt(0x0);
}
//Random Battle FFX.exe+D2A9D7
int Miscellaneous::getTotalLightningDodgeCount() {
    return Process::memoryReadInt(0xD2CE8E);
}
int Miscellaneous::getHighestLightningDodgeComboCount() {
    return Process::memoryReadInt(0xD2CE90);
}
int Miscellaneous::getYojimboCompatabilityPoints() {
    return Process::memoryReadInt(0xD30834);
}

//Ruins - Stairs (Withered Bouquet) d2cdfc (0) 
//Ruins Hall Chest (Hi Potion x1) D2CE0B (3) 