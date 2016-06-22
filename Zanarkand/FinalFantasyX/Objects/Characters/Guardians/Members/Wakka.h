#ifndef  WAKKA_H
#define WAKKA_H
#include "../Guardian.h"
#include <string>
class Wakka : public Guardian {
public:
    Wakka();
    uint32_t getAffectionTowardsTidus();;
};
#endif