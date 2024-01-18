#include <math.h>
#include <stdlib.h>
#include <stdint.h>
struct piste;
struct polku;
double laske_etaisyys(struct piste* a, struct piste* b);
void laske_kuljettu_matka(struct polku *polku);


struct piste {
  int koordinaatit[3];
  struct piste *seuraava;
};

struct polku {
  double matka;
  struct piste *pisteet;
};

double laske_etaisyys(struct piste* a, struct piste* b) {
    double sum = 0.0;
    for(int i = 0; i < 3; i++) {
        sum += pow(b->koordinaatit[i] - a->koordinaatit[i], 2);
    }
    return sqrt(sum);
}

void laske_kuljettu_matka(struct polku *polku) {
    double kokonaismatka = 0.0;
    struct piste *nykyinen = polku->pisteet;

    while (nykyinen != NULL && nykyinen->seuraava != NULL) {
        kokonaismatka += laske_etaisyys(nykyinen, nykyinen->seuraava);
        nykyinen = nykyinen->seuraava;
    }

    polku->matka = kokonaismatka;
}
