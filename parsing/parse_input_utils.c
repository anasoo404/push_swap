/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 22:53:56 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 02:56:48 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

void	free_stack(t_stack *stack)
{
	free(stack->data);
	free(stack);
}

int	is_num(int c)
{
	if ((char)c >= '0' && (char)c <= '9')
		return (1);
	return (0);
}

int	is_sign(int c)
{
	if ((char)c == '+' || (char)c == '-')
		return (1);
	return (0);
}

long	my_atol(char **str)
{
	long	res;
	int		sign;

	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		*str += 1;
	}
	res = 0;
	while (**str >= '0' && **str <= '9')
	{
		res = res * 10 + (**str - '0');
		*str += 1;
	}
	if (**str)
		*str += 1;
	return (sign * res);
}
