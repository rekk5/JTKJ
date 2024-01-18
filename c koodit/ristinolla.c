#include <stdint.h>

int8_t tictactoe_check(int8_t * gameboard, int win_len);

#include <stdint.h>

int8_t tictactoe_check(int8_t *gameboard, int win_len) {
    int w, h, i, j, count;
    int size = 10;  // 10x10 ruudukko
    int8_t winner = 0;

    // Apufunktio tarkistukseen
    int8_t check_direction(int start_w, int start_h, int dw, int dh) {
        int8_t first_value = gameboard[start_h * size + start_w];
        if (first_value == 0) return 0;

        for (i = 1; i < win_len; i++) {
            if (first_value != gameboard[(start_h + i * dh) * size + start_w + i * dw]) {
                return 0;
            }
        }
        return first_value;
    }

    for (h = 0; h < size; h++) {
        for (w = 0; w < size; w++) {
            if (w <= size - win_len) {
                // Vaaka
                int8_t result = check_direction(w, h, 1, 0);
                if (result) {
                    if (winner && winner != result) return 0;
                    winner = result;
                }
            }

            if (h <= size - win_len) {
                // Pysty
                int8_t result = check_direction(w, h, 0, 1);
                if (result) {
                    if (winner && winner != result) return 0;
                    winner = result;
                }
            }

            if (w <= size - win_len && h <= size - win_len) {
                // Diagonaali vasemmalta oikealle
                int8_t result = check_direction(w, h, 1, 1);
                if (result) {
                    if (winner && winner != result) return 0;
                    winner = result;
                }
            }

            if (w >= win_len - 1 && h <= size - win_len) {
                // Diagonaali oikealta vasemmalle
                int8_t result = check_direction(w, h, -1, 1);
                if (result) {
                    if (winner && winner != result) return 0;
                    winner = result;
                }
            }
        }
    }

    return winner;
}
