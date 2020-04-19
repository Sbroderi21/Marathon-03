#include "ft_header.h"

t_status    main(int argc, char *argv[]) {
    
    if (ft_check_data(argc, argv) == FAIL) {
        ft_putstr("Error: Invalid input data.");
        return (FAIL);
    }
    int **matrix;
    matrix = ft_create_matrix(argv);
    ft_print_matrix(matrix);
    return (SUCSESS);
}
