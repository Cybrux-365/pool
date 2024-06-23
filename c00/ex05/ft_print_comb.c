#include <unistd.h>
void ft_print_comb (void)
{
    char 	nb[3];
    int  	i;
    int 	j;
    int 	k;
    i = 0;
    while (i <= 7)
    {
	j = 1+i;
        while (j <= 8)
	{
	    k = 1+j;
	    while (k <= 9)
	    {
	        nb[0] = 48 + i;
		nb[1] = 48 + j;
		nb[2] = 48 + k;
		write (1,nb,3);
		if (i != 7 || j != 8 || k !=9)
			write (1,", ",2);
		++k;
	    }
	    ++j;
	}
	++i;
    }
}
