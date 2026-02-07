#include "push_swap.h"

void	print_adaptive(t_config *config) 
{
	 int	stat_indx;
	 
	 stat_indx = config -> stategy;
	 ft_putstr_fd("[bench] strategy: ",2);
	 ft_putstr_fd("Adaptive ", 2);
	 if (stat_indx == 1)
		 ft_putstr_fd (" O(n2))\n", 2);
	 else if (stat_indx == 2)
                 ft_putstr_fd ("O(n√n)\n", 2);
	 else if (stat_indx == 3)
                 ft_putstr_fd ("O(nlogn)\n", 2);

}

void    print_strategy(t_config *config)
{
         int    stat_indx;

         stat_indx = config -> stategy;
         ft_putstr_fd("[bench] strategy: ",2);
         if (stat_indx == 1)
                 ft_putstr_fd ("Simple / O(n2))\n", 2);
         else if (stat_indx == 2)
                 ft_putstr_fd ("Medium /O(n√n)\n", 2);
         else if (stat_indx == 3)
                 ft_putstr_fd ("Complex /O(nlogn)\n", 2);

}

void	print_ops(t_config *config)
{
	ft_putstr_fd("\n[bench]  ", 2);
	ft_putstr_fd("sa: ", 2);
	ft_putnbr_fd(config->ops_count.sa, 2);
	ft_putstr_fd(" sb: ", 2);
	ft_putnbr_fd(config->ops_count.sb, 2);
	ft_putstr_fd(" ss: ", 2);
	ft_putnbr_fd(config->ops_count.ss, 2);
	ft_putstr_fd(" pa: ", 2);
	ft_putnbr_fd(config->ops_count.pa, 2);
	ft_putstr_fd(" pb: ", 2);
	ft_putnbr_fd(config->ops_count.pb, 2);
	ft_putstr_fd("\n", 2);
	ft_putstr_fd("[bench]  ", 2);
	ft_putstr_fd("ra: ", 2);
	ft_putnbr_fd(config->ops_count.ra, 2);
	ft_putstr_fd(" rb: ", 2);
	ft_putnbr_fd(config->ops_count.rb, 2);
	ft_putstr_fd(" rr: ", 2);
	ft_putnbr_fd(config->ops_count.rr, 2);
	ft_putstr_fd("rra: ", 2);
	ft_putnbr_fd(config->ops_count.rra, 2);
	ft_putstr_fd(" rrb: ", 2);
	ft_putnbr_fd(config->ops_count.rrb, 2);
	ft_putstr_fd(" rrr: ", 2);
	ft_putnbr_fd(config->ops_count.rrr, 2);
	ft_putstr_fd("\n", 2);
}
void print_benchmarks(t_config *config,double disorder,int is_adap)
{
	print_disorder(disorder);
	if(is_adap == 1)
		print_adaptive(config);
	else
		 print_strategy(config);
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd(config -> ops_count.total, 2);
	print_ops(config);
}
