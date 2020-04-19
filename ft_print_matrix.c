#include "ft_header.h"

void        ft_print_matrix(int **matrix) {
    int i;
    int j;

    i = 0;
    while (i < 6) {
        j = 0;
        while (j < 6) {
            if ((i == 0 && j == 0) || (i == 5 && j == 0)) {
                ft_putstr("  | ");
                j++;
                continue;
            } if ((i == 0 && j == 5) || (i == 5 && j == 5)) {
                ft_putstr(" ");
                j++;
                continue;
            }
            ft_putchar('0' + matrix[i][j]);
            if (j == 0) {
                ft_putstr(" |");
            }
            if (j == 4) {
                ft_putstr(" |");
            }
            if (j != 5) {
                ft_putchar(' ');
            }
            j++;
        }
        if (i == 0) {
            ft_putstr("\n--+---------+--");
        }
        if (i == 4) {
            ft_putstr("\n--+---------+--");
        }
        ft_putchar('\n');
        i++;
    }
}
