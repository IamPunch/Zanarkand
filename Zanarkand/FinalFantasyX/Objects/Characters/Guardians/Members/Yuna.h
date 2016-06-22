#ifndef  YUNA_H
#define YUNA_H
#include "../Guardian.h"
#include <string>
class Yuna : public Guardian {
public:
    Yuna();
    uint32_t getAffectionTowardsTidus();;
};
#endif