#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int i;
struct mpudata_t mpu;
void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold);

struct mpudata_t {
    float data[6];
};

void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold)
{
    if (mpu.data[index] > threshold)
    {
        for (i=0; i<6; i++)
        {
            printf("%.2f",mpu.data[i]);
            if (i<5)
            {
                printf(",");
            }
        }
    }
}
