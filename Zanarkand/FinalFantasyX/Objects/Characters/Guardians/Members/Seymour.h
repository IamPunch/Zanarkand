#ifndef  SEYMOUR_H
#define SEYMOUR_H
#include "../Guardian.h"
#include <string>
class Seymour : public Guardian {
public:
    Seymour();
    uint32_t getAffectionTowardsTidus();;
};
#endif