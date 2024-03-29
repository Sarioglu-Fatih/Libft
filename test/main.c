#include "../libft.h"

int main(void)
{
    char    str[] = "10";

    ft_putnbr((ft_atoi(str) + ft_atoi(str)));
    ft_putchar('\n');
    return (0);
}