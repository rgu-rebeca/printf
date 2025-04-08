#include "include/ft_printf.h"

int main(void)
{
    char    *str = "";
    int a = 42;
    int *b = &a;
    ft_printf("Hola, esto es una prueba: %d\n", a);
    ft_printf("Caracter: %c, String: %s\n", 'A', "Hola mundo");
    ft_printf("Puntero1: %p\n", str);
    ft_printf("Puntero2: %p\n", b);
    ft_printf("Unsigned int: %u\n", 400);
    ft_printf("hexadecimal minuscula: %x\n", 18);
    ft_printf("hexadecimal mayuscula: %x\n", 18);
    return 0;
}
