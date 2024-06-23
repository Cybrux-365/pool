#include <unistd.h>
void ft_print_alphabet(void)
{
    char alphabet = 97;
    int		i;
    i = 0;
    while (i < 26)
    {
        write (1,&alphabet,1);
	alphabet++;
        ++i;	
    }
}
