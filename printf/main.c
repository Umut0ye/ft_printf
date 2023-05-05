#include "ft_printf.h"
int main()
{
    char *p="umut";
    ft_printf("%d \n", ft_printf("%d %s %p %u %x %X %i %% %c \n", 150, "umut", p, -1, 1500, 1500,  31, 'u'));
    printf("%d \n" ,printf("%d %s %p %u %x %X %i %% %c \n", 150, "umut", p, -1, 1500, 1500,  31, 'u'));
}