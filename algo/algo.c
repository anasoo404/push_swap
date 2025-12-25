/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 22:26:20 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/25 22:26:38 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

pour les push de chunk pb du plus petit ou le plus petit plus 1 au plus grand to b depuis a jusqu a compteur i == a->capacity avec ra en fonction de la fill_data
si elle est < (a->capacity - 1) / 2 else rra a chaque rotate

pour les chunk : prev chunk == 0 chunk = 20  entre les 2 on push ce qui sont dans cette tranche dabbord
puis chunk puis entre + 20 chacun etc si chunk > capcity entre prev chunk et capacity on push

pour les operationsn et les checks plus  : a chaque op on check si la chunk est trie dans a
					  si elle est trie on check si dans b ya des elem de la chunk // trouve la suite
					  															  // vois dans quelle sens push peut etre du plus grand -1

condtions : si dans b, b->data[0] < b->data[1] sb si bsize > 1

on pa tout ensuite de i == 0 a i == b->capacity

push_

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
	push_half_of_a_data_to_b(a, b);
	i = 0;
	printf("after push half STACK a : ", a->data[i++]);
	while (i < a->size)
		printf("%d ", a->data[i++]);
	printf("\n");
	i = 0;
	printf("after push half STACK b : ", b->data[i++]);
	while (i < b->size)
		printf("%d ", b->data[i++]);
	printf("\n");
	return (0);
}
