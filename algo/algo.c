/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 22:26:20 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/22 22:50:54 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_half_of_a_data_to_b(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = 0;
	while (i < (a->capacity - 1) / 2)
	{
		if (a->data[i] <= (a->capacity - 1) / 2)
		{
			j = 0;
			while (j < i)
			{
				if (i < (a->capacity - 1) / 2)
					ra(a);
				else
					rra(a);
				j += 1;
			}
			pb(a, b);
		}
	}
}
