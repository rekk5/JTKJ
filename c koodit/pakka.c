#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#include <stdio.h>

void shuffle(uint8_t *list, uint16_t list_size);

void shuffle(uint8_t *list, uint16_t list_size) {
    // Valiaikainen taulukko, johon tallennetaan sekoitettu lista
    uint8_t temp[list_size];
    uint16_t temp_index = 0;

    while (list_size > 0) {
        uint16_t rand_index = rand() % list_size;

        // Lisaa satunnaisesti valittu alkio valiaikaiseen taulukkoon
        temp[temp_index] = list[rand_index];
        temp_index++;

        // Poista valittu alkio alkuperaisesta taulukosta
        for (uint16_t i = rand_index; i < list_size - 1; i++) {
            list[i] = list[i + 1];
        }

        list_size--;
    }

    // Kopioi valiaikainen taulukko alkuperaiseen taulukkoon
    for (uint16_t i = 0; i < temp_index; i++) {
        list[i] = temp[i];
    }
}

