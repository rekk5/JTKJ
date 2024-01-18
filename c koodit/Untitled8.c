#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
void movavg(float *array, uint8_t array_size, uint8_t window_size);

void movavg(float *array, uint8_t array_size, uint8_t window_size){
    int a, b;
    float kesk;
    for (a = 0; a<= array_size - window_size; a++){
        for (b=0; b < window_size; b++){
            kesk += array[a + b];
        }
        float tulos = kesk / window_size;
        printf("%.2f", tulos);
        if (a < (array_size - window_size)){
            printf(",");
        }
        kesk = 0;
    }

}
