#include "include/ft_printf.h"

int main(void)
{
    ft_printf("Hola, esto es una prueba: %d\n", 42);
    ft_printf("Caracter: %c, String: %s\n", 'A', "Hola mundo");
    ft_printf("Puntero: %p\n", (void *)main);
    return 0;
}
