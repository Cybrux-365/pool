void ft_swap (int *a,int *b)
{
    *a = *b + *a;
    *b = *a - *b;
    *a = *a - *b;
}
