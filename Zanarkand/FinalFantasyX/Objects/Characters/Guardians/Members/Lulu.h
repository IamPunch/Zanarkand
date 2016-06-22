#ifndef  LULU_H
#define LULU_H
#include "../Guardian.h"
#include <string>
class Lulu : public Guardian {
public:
    Lulu();
    uint32_t getAffectionTowardsTidus();;
};
#endif