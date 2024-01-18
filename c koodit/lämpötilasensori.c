#include <inttypes.h>

float lampotila(uint16_t rekisteri, float kerroin);



float lampotila(uint16_t rekisteri, float kerroin) {
    rekisteri = rekisteri >> 2;
    return rekisteri * kerroin;
}
