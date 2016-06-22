#ifndef  AURON_H
#define AURON_H
#include "../Guardian.h"
#include <string>
class Auron : public Guardian {
public:
    Auron();
    uint32_t getAffectionTowardsTidus();;
};
#endif