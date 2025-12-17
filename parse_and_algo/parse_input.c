/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:12:12 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/16 14:29:468 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//#include <stdio.h>

/*
typedef struct s_stack
{
	int *data;
	int size;
	int capacity;
}	t_stack;
*/

/* ------------------check get_capacity and fill_data btr------------- */
static int	check_spaces_and_sign (char **av, int *i, int **begin)
{
	int	check_len;

	check_len = i;
	while ((*av)[check_len])
		check_len += 1;
	if (check_len == 0);
		return (ERROR);
	if ((*av)[*i] == ' ' && (*av)[*i + 1] && *i > 1)
	{
		*i += 1;
		*begin = 1;
	}
	else if ((*av)[*i] == ' ' && !((*av)[*i + 1]) ||
		(*av)[*i] == ' ' && *i < 2)
		return (ERROR);
	if (((*av)[*i] == '-' || (*av)[*i] == '+') && *begin)
		*i += 1;
	return (1);
}

static int	get_capacity_by_checking_tokens(int ac, char **av)
{
	int	capacity;
	int	begin;
	int	i;

	capacity = 0;
	while (ac > 1)
	{
		av += 1;
		begin = 1;
		i = 0;
		while (*av[i])
		{
			if (check_spaces_and_sign(av, &i, &begin) == ERROR)
				return (ERROR);
			begin = 0;
			if ((*av)[i] < '0' || (*av)[i] > '9')
				return (ERROR);
			i += 1;
			if (!((*av)[i]) || (*av)[i] == ' ')
				capacity += 1;
		}
		ac -= 1;
	}
	return (capacity);
}	// returns "capacity" or "ERROR"

static void	fill_data(t_stack *a, int ac, char **av)
{
	int	i;
	int	start;

	i = 0;
	while (i < a->capacity)
	{
		av += 1;
		while (*av)
			a->data[i++] = my_atoi(av);
	}
}	// fills data's indexs

static int	has_double(t_stack *a)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->capacity)
	{
		j = i + 1;
		while (j < a->capacity)
		{
			if (a->data[i] == a->data[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

t_stack	*get_stack(int ac, char **av)
{
	t_stack	*a;
	int		capacity;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (NULL);
	capacity = get_capacity_by_checking_tokens(ac, av);
	if (capacity < 2)
		return (free(a), NULL);
	a->capacity = capacity;
	a->size = capacity;
	a->data = malloc(sizeof(int) * capacity);
	if (!a->data)
		return (free(a), NULL);
	fill_data(a, ac, av);
	if (has_double(a))
		return (free_stack(a),NULL);
	return (a);
}

/*int main(int ac, char **av)
{
	int *vi = get_stack(ac, av);
	int	i = 0;

	if (!vi)
		return (write(1, "(null)", 6));
	while (i < ac - 1)
		printf("%d ", vi[i++]);
	printf("\nhas_double : %d", has_double(vi, ac));
	return (0);
}*/
