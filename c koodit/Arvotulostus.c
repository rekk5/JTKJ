#include <stdio.h>
#include <math.h>
void kirjoita_sensorit(char *str, float ax, float ay, float az, float press, float temp);

void kirjoita_sensorit(char *str, float ax, float ay, float az, float press, float temp){
    int press1 = (int)(round(press));
    sprintf(str,"%+.2f,%+.2f,%+.2f,%d,%.2f",ax,ay,az,press1,temp);
    return ;
}
