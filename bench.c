#include "push_swap.h"
void print_benchmarks(t_config *config,double disorder)
{
    
    char *strategies[] = {"Adaptive", "Simple", "Medium", "Complex"};

    print_disorder(disorder);
    ft_printf("[bench] strategy: %s\n", strategies[config->stategy]);
    ft_printf("[bench] total_ops: %d\n", config->ops_count.total);
    ft_printf("[bench] sa:%d sb:%d  ss:%d pa:%d pb:%d\n[bench] ra:%d rb:%d rr:%d rra:%d rrb:%d rrr:%d\n",
        config->ops_count.sa,
        config->ops_count.sb,
        config->ops_count.ss,
        config->ops_count.pa,
        config->ops_count.pb,
        config->ops_count.ra,
        config->ops_count.rb,
        config->ops_count.rr,
        config->ops_count.rra,
        config->ops_count.rrb,
        config->ops_count.rrr);
}
   