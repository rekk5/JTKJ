#include <ctype.h>
#include <stdint.h>

void merkkilaskuri(char *str, uint8_t *tulos);

void merkkilaskuri(char *str, uint8_t *tulos) {
    uint8_t vokaalit = 0;
    uint8_t konsonantit = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vokaalit++;
        }
        else if ((ch >= 'a' && ch <= 'z') && (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')) {
            konsonantit++;
        }

    }

    tulos[0] = vokaalit;
    tulos[1] = konsonantit;
}
