#include <inttypes.h>
#include <math.h>

float valoisuus(uint16_t rekisteri);

float valoisuus(uint16_t rekisteri){
    float rekisteri1 = rekisteri >> 12;
    float rekisteri2 = rekisteri & 4095;
    return 0.01*pow(2, rekisteri1) * rekisteri2;
}
