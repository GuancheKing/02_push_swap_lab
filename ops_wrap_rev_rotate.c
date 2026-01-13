

#include "push_swap.h"

void	rra(t_node **a)
{
	if (!a || !*a || !(*a)->nx)
		return ;
	r_rotate_stack(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	if (!b || !*b || !(*b)->nx)
		return ;
	r_rotate_stack(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	int	flag;

	flag = 0;
	if (a && *a && (*a)->nx)
	{
		r_rotate_stack(a);
		flag = 1;
	}
	if (b && *b && (*b)->nx)
	{
		r_rotate_stack(b);
		flag = 1;
	}
	if (flag)
		write(1, "rrr\n", 4);
}
