/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 02:55:13 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 21:17:36 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//#include <stdio.h>

/*
typedef struct s_stack
{
	int capacity;
	int size;
	int *data;
}	t_stack;
*/

int	check_input(char *av, int *capacity)
{
	char	next_char;
	int		i;

	i = 0;
	while (av[i])
	{
		if (is_sign(av[i]))
			i++;
		if (!is_num(av[i]))
			return (ERROR);
		while (is_num(av[i]))
			i++;
		if (av[i])
			next_char = av[i + 1];
		if (av[i])
		{
			if ((av[i] == ' ') && (is_num(next_char) || is_sign(next_char)))
				i++;
			else
				return (ERROR);
		}
		*capacity += 1;
	}
	return (0);
}

/*checks input and gets capacity*/
int	get_capacity(int ac, char **av)
{
	int		capacity;

	capacity = 0;
	while (ac - 1)
	{
		av += 1;
		if (!ft_strlen(*av))
			return (ERROR);
		if (check_input(*av, &capacity) == ERROR)
			return (ERROR);
		ac -= 1;
	}
	return (capacity);
}
// returns "capacity" or "ERROR"

void	fill_data(t_stack *a, char **av)
{
	int	i;

	i = 0;
	while (i < a->capacity)
	{
		av += 1;
		while (**av)
			a->data[i++] = my_atol(av);
	}
}
// fills data's indexs

int	has_double(t_stack *a)
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

/*int main(int ac, char **av)
{
	printf("AC : %d\n", ac);
	t_stack *vi = get_stack(ac, av);
	int	i = 0;

	if (!vi)
	{
		printf("!vi\n");
		return (write(1, "(null)", 6));
	}
	while (i < vi->capacity)
		printf("%d ", vi->data[i++]);
	printf("\nhas_double : %d", has_double(vi));
	return (0);
}*/
