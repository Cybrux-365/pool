#include <unistd.h>
void ft_putchar (char c)
{
    write (1,&c,1);
}
void ft_new (char st1,char st2)
{
    ft_putchar (st1/10 +48);
    ft_putchar (st1%10 +48);
    ft_putchar (' ');
    ft_putchar (st2/10 +48);
    ft_putchar (st2%10 +48);
    if (st1 != 98 || st2 != 99)
	    write (1,", ",2);
}
void ft_print_comb2 (void)
{
    int nb1,nb2;
    nb1 = 0;
    while (nb1 < 99)
    {
        nb2 = nb1 + 1;
	while (nb2 < 100)
	{
	    ft_new (nb1,nb2);
	    nb2++;
	}
	nb1++;
    }
}
