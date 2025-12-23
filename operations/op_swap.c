/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:38:31 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 02:38:19 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->size < 2)
		return ;
	tmp = a->data[0];
	a->data[0] = a->data[1];
	a->data[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->size < 2)
		return ;
	tmp = b->data[0];
	b->data[0] = b->data[1];
	b->data[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	int	tmp;

	if (a->size < 2 || b->size < 2)
		return ;
	tmp = a->data[0];
	a->data[0] = a->data[1];
	a->data[1] = tmp;
	tmp = b->data[0];
	b->data[0] = b->data[1];
	b->data[1] = tmp;
	write(1, "ss\n", 3);
}
