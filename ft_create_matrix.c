#include "ft_header.h"

int    **ft_create_matrix(char *av[]) {
    int index;
    int i;
    int j;
    int **matrix;

    i = 0;
    matrix = (int **)malloc(sizeof(*matrix) * 6);
    while (i < 6) {
        matrix[i] = (int *)malloc(sizeof(*matrix[i]) * 6);
        j = 0;
        while (j < 6) {
            matrix[i][j] = 0;
            j++;
        }
        i++;
    }
    index = 0;
    i = 0;
    j = 1;
    while  (j < 5) {
        matrix[i][j] = av[1][index] - '0';
        index += 2;
        j++;
    }
    i = 5;
    j = 1;
    while  (j < 5) {
        matrix[i][j] = av[1][index] - '0';
        index += 2;
        j++;
    }
    j = 0;
    i = 1;
    while  (i < 5) {
        matrix[i][j] = av[1][index] - '0';
        index += 2;
        i++;
    }
    j = 5;
    i = 1;
    while  (i < 5) {
        matrix[i][j] = av[1][index] - '0';
        index += 2;
        i++;
    }
    return (matrix);
}
