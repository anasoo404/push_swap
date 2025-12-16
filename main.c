/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:12:48 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/16 19:22:38 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*trouve la structure de donnees la plus adapte et l algo de tri en relation*/
int	main(int ac, char **av)
{
	int	*a;
	int	*b;

	if (ac == 1)
		return (1);
	a = get_stack(ac, av);
	if (!a)
		return (write(1, "Error\n", 5), 1);
	b = malloc(sizeof(int) * ((ac - 1) / 2));
	free(a);
	free(b);
	return (0);
}
