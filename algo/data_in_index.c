/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_in_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:53:13 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 22:55:53 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	fill_min(int *min, int i, t_stack *tmp)
{
	int	j;
	int	min_found;

	min[i] = i;
	j = 0;
	while (j < tmp->size - 1)
	{
		if (j == tmp->size - 1 && tmp->size < tmp->capacity)
			break ;
		if (tmp->data[i] > tmp->data[j])
			min[i] = j;
		j += 1;
	}
	min_found = tmp->data[min[i]];
	while (tmp->data[tmp->size - 1] != min_found)
	{
		if (j < (tmp->size - 1) / 2)
			r_without_write(tmp);
		else
			rr_without_write(tmp);
	}
	tmp->size -= 1;
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
		a->data[i++] = min[j];
	}
}

int	tranform_data_in_index(t_stack *a)
{
	t_stack	*tmp;
	int		*min;
	int		i;

	min = malloc(sizeof(int) * a->capacity);
	tmp = malloc(sizeof(t_stack));
	if (!min || !tmp)
		return (free(min), free(tmp), 0);
	i = 0;
	while (i < a->capacity)
	{
		tmp->data[i] = a->data[i];
		i += 1;
	}
	i = 0;
	while (i < a->capacity)
	{
		fill_min(min, i, tmp);
		i += 1;
	}
	fill_data_with_index(a, min);
	return (free(min), free(tmp), 1);
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
	/*push_half_of_a_data_to_b(a, b);
	i = 0;
	while (i < a->size)
		printf("\nafter push half STACK a : %d\n", a->data[i++]);
	i = 0;
	while (i < b->size)
		printf("after push half STACK b : %d\n", b->data[i++]);
	return (0);*/
}


