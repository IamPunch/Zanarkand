#ifndef  KIMAHRI_H
#define KIMAHRI_H
#include "../Guardian.h"
#include <string>
class Kimahri : public Guardian {
public:
    Kimahri();
    uint32_t getAffectionTowardsTidus();;
};
#endif