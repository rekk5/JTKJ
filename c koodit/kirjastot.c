#include <inttypes.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdlib.h>
int main() {

    uint8_t i=0,j=0;
    clock_t start,end;

    srand(time(NULL));
    start = clock();
    do {
        printf("%d < %d\n",i++,(j = rand() % UCHAR_MAX));
   } while (i < j);
    end = clock();

    printf("Loop took %f seconds to run\n", (double)(end-start) / CLOCKS_PER_SEC);

    return 0;
}
