#include <inttypes.h>
#include <math.h>

float kosteus(uint16_t rekisteri);

float kosteus(uint16_t rekisteri) {
    return rekisteri/pow(2, 16) * 100;
}
