#include <string.h>
#include <stdlib.h>
float keskiarvo(char *lista);

float keskiarvo(char *lista){
    float luvut = 0;
    float jakaja = 0;
    const char sep[] = ",";
    char *token;
    token = strtok(lista, sep);
    while( token != NULL ) {
        float arvo =  atof(token);
        luvut =luvut + arvo;
        jakaja++;
        token = strtok(NULL, sep);
    }
    float vastaus = luvut / jakaja;
    return vastaus;
}
