/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_in_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:53:13 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/25 21:36:09 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	fill_min(int *min, int i, int *data, int size)
{
	int	j;
	int	min_found;

	min[i] = i;
	min_found = INT_MAX;
	j = 0;
	while (j < size)
	{
		if (data[j] < min_found && i == 0)
		{
			min[i] = j;
			min_found = data[j];
		}
		else if (data[j] < min_found && data[j] != INT_MIN)
		{
			min[i] = j;
			min_found = data[j];
		}
		j += 1;
	}
	data[min[i]] = INT_MIN;
}

static void	fill_data_with_index(t_stack *a, int *min)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->capacity)
	{
		j = 0;
		while (min[j] != i)
			j += 1;
		a->data[i++] = j;
	}
}

int	tranform_data_in_index(t_stack *a)
{
	int	*data;
	int	*min;
	int	i;

	min = malloc(sizeof(int) * a->capacity);
	data = malloc(sizeof(int) * a->capacity);
	if (!min || !data)
		return (free(min), free(data), 0);
	i = 0;
	while (i < a->capacity)
	{
		data[i] = a->data[i];
		i += 1;
	}
	i = 0;
	while (i < a->capacity)
	{
		fill_min(min, i, data, a->capacity);
		i += 1;
	}
	fill_data_with_index(a, min);
	return (free(min), free(data), 1);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	i = 0;
	a = get_stack(ac, av);
	if (!a)
		return (write(1, "a NULL\n", 7));
	b = get_b(a);
	if (!b)
		return (write(1, "b NULL\n", 7));
	i = 0;
	while (i < a->capacity)
		printf("%d ", a->data[i++]);
	printf("\n");
	tranform_data_in_index(a);
	i = 0;
	while (i < a->capacity)
		printf("%d ", a->data[i++]);
	printf("\n");
	/* push_half_of_a_data_to_b(a, b);
	i = 0;
	while (i < a->size)
		printf("\nafter push half STACK a : %d\n", a->data[i++]);
	i = 0;
	while (i < b->size)
		printf("after push half STACK b : %d\n", b->data[i++]); */
	return (0);
}
