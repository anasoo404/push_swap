/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:33:54 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 21:06:22 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	i;
	int	b_top;

	if (!(b->size))
		return ;
	b_top = b->data[0];
	i = a->size - 1;
	while (i > 0)
	{
		a->data[i] = a->data[i - 1];
		i -= 1;
	}
	while (i < b->size - 1)
	{
		b->data[i] = b->data[i + 1];
		i += 1;
	}
	a->data[0] = b_top;
	a->size += 1;
	b->size -= 1;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;
	int	a_top;

	if (!(a->size))
		return ;
	a_top = a->data[0];
	i = b->size - 1;
	while (i > 0)
	{
		b->data[i] = b->data[i - 1];
		i -= 1;
	}
	while (i < a->size - 1)
	{
		a->data[i] = a->data[i + 1];
		i += 1;
	}
	b->data[0] = a_top;
	b->size += 1;
	a->size -= 1;
	write(1, "pb\n", 3);
}
