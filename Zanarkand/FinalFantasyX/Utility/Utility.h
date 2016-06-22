#ifndef  UTILITY_H
#define UTILITY_H
#include <bitset>
#include <windows.h>
template <size_t byteArraySize>
void bytesToBitset(uint8_t* byteArray, std::bitset<byteArraySize * CHAR_BIT>& result) {
    for (int i = byteArraySize - 1; i >= 0; --i) {
        for (int bit = 0; bit < CHAR_BIT; ++bit) {
            result[i * CHAR_BIT + bit] = ((byteArray[i] >> bit) & 1);
        }
    }
}
#endif