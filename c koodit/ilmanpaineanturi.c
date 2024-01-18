#include <inttypes.h>

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb);

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb){
    uint32_t tulos2 = (msb | 0b00000000000000000000)<<8;
    uint32_t tulos3 = (lsb | tulos2)<<4;
    uint32_t tulos4 = (xlsb>>4) | tulos3;
    return tulos4;
}
