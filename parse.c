#include "push_swap.h"

int parse_flags(int argc, char **argv, t_config *config)
{
    int i;

    i = 1;
    config->benchmark =0;
    config->stategy =0;
    while (i < argc )
    {
        // If it doesn't start with '-', it's a number
        if (argv[i][0] != '-')
            break;
            // If it starts with '-' followed by a digit, it's a negative number
        if (argv[i][0] == '-' && ft_isdigit(argv[i][1]))
            break;

        if (ft_strncmp(argv[i], "--bench",8) == 0)
            config->benchmark = 1;
        else if (ft_strncmp(argv[i], "--simple",9) == 0)
            config->stategy = 1;
        else if (ft_strncmp(argv[i], "--medium",9) == 0)
            config->stategy = 2;
        else if (ft_strncmp(argv[i], "--complex",10) == 0)
            config->stategy = 3;
        else if (ft_strncmp(argv[i], "--adaptive",10) == 0)
            config->stategy = 0;
        else 
        {
            ft_putendl_fd("Error", 2);
            exit(1);
        }
        
        i++;
    }
     return (i);
}