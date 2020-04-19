#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>
# define SUCSESS 0
# define FAIL 1
# define TRUE 1
# define FALSE 0

typedef int t_status;
typedef int t_bool;

int         ft_putchar(char c);
void        ft_putstr(char *str);
int         ft_strlen(char *str);
void        ft_print_matrix(int **matrix);
int         **ft_create_matrix(char *av[]);
t_status    ft_check_data(int ac, char *av[]);

#endif
