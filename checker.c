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
	int	i;
	int	j;
	long  long	n; // modified to long long to handle larger number 
	char	**input;//renames args to input
	
	i = start_index;
	while(argv[i])
	{
		input = ft_split(argv[i],' ');
		if (!input || !input[0])
		{
			free_split(input);
			return ;
		}
		j = 0;
		while (input[j])
		{ 
			if (!ft_isnum(input[i]))
			{
				free_split(input);
				Error_and_exit();
			}
		 	n = ft_atoi(input[i]);
			if (n >  2147483647 || n < -2147483648) 
			{
				free_split(input);
				Error_and_exit();
			}
			j++;
		}
		
		if (is_duplicate(argv,start_index))
			Error_and_exit();
		i++;
		free_split(input);
	}
}
