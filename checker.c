#include "push_swap.h"
#include <stdio.h>
long long	ft_atol(const char *nptr)
{
	long long	res;
	int			sign;
	int			i;

	res = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		// Catch overflow early
		if (res * sign > 2147483647LL || res * sign < -2147483648LL)
			return (2147483649LL); // Return value outside INT range
		i++;
	}
	return (res * sign);
}
int is_duplicate(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = i + 1;
        while (argv[j])
        {
            if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int ft_isnum(char *num) 
{
    int i;

    i = 0;
    if (num[i] == '-' || num[i] == '+')
        i++;
    if (!num[i])
        return (0);
    while (num[i])
    {
        if (!ft_isdigit(num[i]))
            return (0);
        i++;
    }
    return (1);
}

void checker(int argc, char **argv)
{
    int i;
    long n;
    char **args;
    
    (void)argc;
    i = 1;
    args = argv;
    while(args[i])
    {
        if (!ft_isnum(args[i]))
        {
            ft_putendl_fd("Error: Non-numeric value detected.", 1);
            exit(1);
        } 
        n = ft_atoi(args[i]);
        printf("Converted number: %ld\n", n); // Debugging line 
        if (n >  2147483647 || n < -2147483648)
        {
            ft_putendl_fd("Error: Integer overflow/underflow detected.", 1);
            exit(1);
        }
        i++;
    }

    if (is_duplicate(argv))
    {
        ft_putendl_fd("Error: Duplicate values found.", 1);
        exit(1);
    }
}