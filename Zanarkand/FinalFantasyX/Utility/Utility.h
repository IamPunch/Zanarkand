#ifndef  UTILITY_H
#define UTILITY_H
#include <bitset>
#include <string>
#include <vector>

std::string getAllTreasure();
bool getBit(uint8_t byte, int position);
std::string getChangedTreasure(std::vector<bool>& v);
std::string int_to_hex(int i);
void decodeMemoryRegion(std::string fileName);
template <size_t byteArraySize>
void bytesToBitset(uint8_t* byteArray, std::bitset<byteArraySize * CHAR_BIT>& result) {
    for (int i = byteArraySize - 1; i >= 0; --i) {
        for (int bit = 0; bit < CHAR_BIT; ++bit) {
            result[i * CHAR_BIT + bit] = ((byteArray[i] >> bit) & 1);
        }
    }
}
#endif