#include "include/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    char    *str = "";
    int a = 42;
    int *b = &a;
    ft_printf("F:character: %c\n", '\0');
    printf("P:character: %c\n", '\0');
    ft_printf("F:Hola, esto es una prueba: %d\n", a);
    printf("P:Hola, esto es una prueba: %d\n", a);
    ft_printf("F:Caracter: %c, String: %s\n", 'A', "Hola mundo");
    printf("P:Caracter: %c, String: %s\n", 'A', "Hola mundo");
    ft_printf("F:Puntero1: %p\n", str);
    printf("P:Puntero1: %p\n", str);
    ft_printf("F:Puntero2: %p\n", b);
    printf("P:Puntero2: %p\n", b);
    ft_printf("F: int: %d\n", INT_MAX + 2);
    printf("P: int: %d\n", INT_MAX + 2);
    ft_printf("F:Unsigned int: %u\n", UINT_MAX + 10086);
    printf("P:Unsigned int: %u\n", UINT_MAX + 10086);
    ft_printf("F:hexadecimal minuscula: %x\n", 18);
    printf("P:hexadecimal minuscula: %x\n", 18);
    ft_printf("F:hexadecimal mayuscula: %x\n", INT_MIN);
    printf("P:hexadecimal mayuscula: %x\n", INT_MIN);
    ft_printf("F:combinados: %% %s %s %d\n", "hoi", "hook", 31);
    printf("P:combinados: %% %s %s %d\n", "hoi", "hook", 31);
    ft_printf("F:porcentaje: %%\n");
    printf("P:porcentaje: %%\n");
    return 0;
}
