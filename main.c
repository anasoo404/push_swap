/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:12:48 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/17 01:24:29 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sort(t_stack *a)
{
	int	i;

	if (a->size != a->capacity)
		return (0);
	i = 0;
	while (i < a->capacity - 1)
	{
		if (a->data[i] > a->data[i + 1])
			return (0);
		i++;
	}
	return (1);
}
int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		return (1);
	a = get_stack(ac, av);
	if (!a)
		return (write(1, "Error\n", 5), 1);
	while (!is_sort(a) && b->size != 0)
	{
		// fais l algo
	}
	free_stack(a);
	free_stack(b);
	return (0);
}
