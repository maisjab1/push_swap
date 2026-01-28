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
            if (ft_strcmp(argv[i], argv[j]) == 0)
                return (1);
            j++;
        }
        i++;
    }
}

void checker(int argc, char **argv)
{
    int i;

    while(argv[i])
    {
        if (!ft_isalnum(argv[i]))
        {
            ft_putendl_fd("Error: Non-numeric value found.", 1);
            exit(0);
        }
        if (ft_atoi(argv[i]) < -2147483648 || ft_atoi(argv[i]) > 2147483647)
        {
            ft_putendl_fd("Error: Integer overflow/underflow detected.", 1);
            exit(0);
        }
    }

    if (is_duplicate(argv))
    {
        ft_putendl_fd("Error: Duplicate values found.", 1);
        exit(0);
    }
}