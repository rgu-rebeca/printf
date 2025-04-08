#include "ft_printf.h"
#include "libft.h"

int	print_s(char *str)
{
	if (!str)
		str = "(null)";
	write (1, str, ft_strlen(str));
	return (ft_strlen(str));
}
