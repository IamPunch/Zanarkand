#ifndef  RIKKU_H
#define RIKKU_H
#include "../Guardian.h"
#include <string>
class Rikku : public Guardian {
public:
    Rikku();
    uint32_t getAffectionTowardsTidus();;
};
#endif