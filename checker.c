#include "push_swap.h"

int is_duplicate(char **argv, int start_index)
{
    int i;
    int j;

    i = start_index;
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
	if (!num || !*num)
		return (0);
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

void	free_split(char **s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void checker(char **argv, int start_index)
{
	int i;
   long  long n; // modified to long long to handle larger numbers
    char **args;
    
    i = start_index;
    args = argv;
    while(args[i])
    {
        if (!ft_isnum(args[i]))
        {
            ft_putendl_fd("Error", 1);
            exit(1);
        }
        n = ft_atoi(args[i]);
        if (n >  2147483647 || n < -2147483648)
        {
            ft_putendl_fd("Error", 1);
            exit(1);
        }
        i++;
    }

    if (is_duplicate(argv,start_index))
    {
        ft_putendl_fd("Error d", 1);
        exit(1);
    }
}
