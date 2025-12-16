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
#include <stdio.h>

static int	is_num(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

static int	has_double(int *stack, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac - 1)
		{
			if (stack[i] == stack[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	my_atoi(char *str)
{
	int	res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

int	*get_stack(int ac, char **av)
{
	int	*stack;
	int	i;

	if (ac < 3)
		return (NULL);
	stack = malloc(sizeof(int) * (ac - 1));
	i = 0;
	while (ac > 1)
	{
		av += 1;
		if (!is_num(*av))
			return (free(stack), NULL);
		stack[i++] = my_atoi(*av);
		ac -= 1;
	}
	if (has_double(stack, ac))
		return (free(stack), NULL);
	return (stack);
}

int main(int ac, char **av)
{
	int *vi = get_stack(ac, av);
	int	i = 0;

	if (!vi)
		return (write(1, "(null)", 6));
	while (i < ac - 1)
		printf("%d ", vi[i++]);
	printf("\nhas_double : %d", has_double(vi, ac));
	return (0);
}
