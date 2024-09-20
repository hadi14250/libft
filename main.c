#include "libft.h"

int main ()
{
	char str[] = "zxzxo x Hello from inside xxz ";
	char set[] = "zx o";
	char *trim = ft_strtrim(str, set);
	printf("%s\n", trim);
}