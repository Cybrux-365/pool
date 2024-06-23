#include <unistd.h>
void ft_print_numbers(void)
{
    char  	nb;
    int 	i = 0;
    while (i < 10)
    {
	nb = 48 + i;
        write (1,&nb,1);
        i++;
    }
}
