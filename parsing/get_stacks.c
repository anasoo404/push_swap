/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 22:52:12 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 02:57:04 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_stack(int ac, char **av)
{
	t_stack	*a;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (NULL);
	a->capacity = get_capacity(ac, av);
	if (a->capacity < 2)
		return (free(a), NULL);
	a->size = a->capacity;
	a->data = malloc(sizeof(int) * a->capacity);
	if (!(a->data))
		return (free(a), NULL);
	fill_data(a, av);
	if (has_double(a))
		return (free_stack(a), NULL);
	return (a);
}

t_stack	*get_b(t_stack *a)
{
	t_stack	*b;

	b = malloc(sizeof(t_stack));
	if (!b)
		return (NULL);
	b->capacity = a->capacity;
	b->size = 0;
	b->data = malloc(sizeof(int) * a->capacity);
	if (!(b->data))
		return (NULL);
	return (b);
}
