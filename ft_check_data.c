#include "ft_header.h"

t_status    ft_check_data(int ac, char *av[]) {
    int index;
    int len;
    
    if (ac != 2) {
        return (FAIL);
    }
    len = ft_strlen(av[1]);
    switch (len) {
        case (9 * 2 - 1): break;
        case (16 * 2 - 1): break;
        case (25 * 2 - 1): break;
        case (36 * 2 - 1): break;
        case (49 * 2 - 1): break;
        case (64 * 2 - 1): break;
        case (81 * 2 - 1): break;
        default: return (FAIL);
    }
    index = 0;
    while (av[1][index] != 0) {
        if ((index % 2 == 0) && (!(av[1][index] >= '1' && av[1][index] <= '9'))) {
            return (FAIL);
        } else if ((index % 2 == 1) && (av[1][index] != ' ')) {
            return (FAIL);
        }
        index++;
    }
    return (SUCSESS);
}
