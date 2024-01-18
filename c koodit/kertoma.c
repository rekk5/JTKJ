#include <inttypes.h>
int64_t laske_kertoma(int8_t n);

int64_t laske_kertoma(int8_t n){
    int i;
    long fact = 1;
    if (n > 20){
        return -1;
    }
    for (i = 1; i <= n; i++) {
        fact = fact*i;
    }
    return fact;
}
