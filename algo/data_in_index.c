/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_in_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:53:13 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/25 17:02:29 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	fill_min(int *min, int i, int *data, int size)
{
	int	j;

	min[i] = i;
	j = 0;
	while (j < size)
	{
		if (data[i] > data[j])
		{
			min[i] = j;
			data[j] = -2147483648;
		}
		j += 1;
	}
	if (min[i] == i)
		data[i] = -2147483648;
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
	int	size;
	int	i;

	size = a->capacity;
	min = malloc(sizeof(int) * a->capacity);
	data = malloc(sizeof(int) * a->capacity);
	if (!min || !data)
		return (free(min), free(data), 0);
	i = 0;
	while (i < a->capacity)
	{
		data[i] = data[i];
		i += 1;
	}
	i = 0;
	while (i < size)
	{
		fill_min(min, i, data, size);
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
