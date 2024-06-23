#include <unistd.h>
// nb = max // arr==nb2 = 012 // n = 3 //
void fw5 (int n,int nb,int nb2)
{
    int i = 01;
    int t;
    while (i <= nb)
    {
        if (i < 10)
        {
            write (1,"0",1);
        }
        t = 1 + i;
        char c = i + 48;
        write (1,&c,1);
        if (i != nb)
        {
            write (1,", ",2);
        }
        i++;
    }
}
void fw4 (int n,int nb,int arr[])
{
    char str[n];
    int nb2 = 0;
    int i = 0;
    while (i < n)
    {
        str[i] = arr[i] + 48;
        i++;
    }
    i = 0;
    while (str[i] != '\0')
    {
        nb2 = nb2 * 10 + (str[i] - 48);
        i++;
    }
    fw5 (n,nb,nb2);
}
void fw3 (int n,int max[],int arr[])
{
    char str[n];
    int i = 0;
    while (i < n)
    {
        str[i] = max[i] + 48;
        i++;
    }
    i = 0;
    int nb = 0;
    while (str[i] != '\0')
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    fw4 (n,nb,arr);
}
void fw2 (int n,int arr[])
{
    int i,j,t;
    i = 0;
    j = 9;
    t = 1;
    int max[n];
    while (i<n)
    {
        max[n-t] = j;
        i++;
        j--;
        t++;
    }
    fw3(n,max,arr);
}
void fw (int n)
{
    int i = 0;
    int arr[n];
    while (i < n)
    {
        arr[i] = i;
	i++;
    }
    i = 0;
    fw2 (n,arr);
}
void ft_print_combn (int n)
{
    fw (n);
}
int main(void)
{
    ft_print_combn(3);
    return (0);
}
