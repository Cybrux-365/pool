#include <stdio.h>
void ft_ultimate_div_mod (int *a,int *b)
{
    int nb = *a;
    *a = *a / *b;
    *b = nb % *b;    
}
