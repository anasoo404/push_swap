/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:15:13 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/16 18:38:10 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

/*parsing*/
int		*get_stack(int ac, char **av);

/*operations*/
	/*swap*/
void	sa(int *a, int *b);
void	sb(int *a, int *b);
void	ss(int *a, int *b);
	/*push*/
void	pa(int *a, int *b);
void	pb(int *a, int *b);
	/*rotate*/
void	ra(int *a, int *b);
void	rb(int *a, int *b);
void	rr(int *a, int *b);
	/*reverse rotate*/
void	rra(int *a, int *b);
void	rrb(int *a, int *b);
void	rrr(int *a, int *b);

#endif
