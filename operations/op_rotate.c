/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:33:48 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 22:29:15 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int	first_elem;
	int	i;

	first_elem = a->data[0];
	i = 0;
	while (i <= a->size - 1)
	{
		if (i == a->size - 1)
		{
			a->data[a->size - 1] = first_elem;
			break ;
		}
		a->data[i] = a->data[i + 1];
		i += 1;
	}
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	int	first_elem;
	int	i;

	first_elem = b->data[0];
	i = 0;
	while (i <= b->size - 1)
	{
		if (i == b->size - 1)
		{
			b->data[b->size - 1] = first_elem;
			break ;
		}
		b->data[i] = b->data[i + 1];
		i += 1;
	}
	write(1, "rb\n", 3);
}

void	r_without_write(t_stack *stack)
{
	int	first_elem;
	int	i;

	first_elem = stack->data[0];
	i = 0;
	while (i <= stack->size - 1)
	{
		if (i == stack->size - 1)
		{
			stack->data[stack->size - 1] = first_elem;
			break ;
		}
		stack->data[i] = stack->data[i + 1];
		i += 1;
	}
}

void	rr(t_stack *a, t_stack *b)
{
	r_without_write(a);
	r_without_write(b);
	write(1, "rr\n", 3);
}
