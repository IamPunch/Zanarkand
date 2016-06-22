#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <vector>
class Item {
public:
    uint32_t getItemDescription(int index);
    uint8_t getItemCount(int index);
    uint8_t getItemSlotIndex();
};

#endif