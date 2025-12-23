/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:33:50 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 22:31:03 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	int	last_elem;
	int	i;

	last_elem = a->data[a->size - 1];
	i = a->size - 1;
	while (i >= 0)
	{
		if (i == 0)
		{
			a->data[0] = last_elem;
			break ;
		}
		a->data[i] = a->data[i - 1];
		i -= 1;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int	last_elem;
	int	i;

	last_elem = b->data[b->size - 1];
	i = b->size - 1;
	while (i >= 0)
	{
		if (i == 0)
		{
			b->data[0] = last_elem;
			break ;
		}
		b->data[i] = b->data[i - 1];
		i -= 1;
	}
	write(1, "rrb\n", 4);
}

void	rr_without_write(t_stack *stack)
{
	int	last_elem;
	int	i;

	last_elem = stack->data[stack->size - 1];
	i = stack->size - 1;
	while (i >= 0)
	{
		if (i == 0)
		{
			stack->data[0] = last_elem;
			break ;
		}
		stack->data[i] = stack->data[i - 1];
		i -= 1;
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	rr_without_write(a);
	rr_without_write(b);
	write(1, "rrr\n", 4);
}
