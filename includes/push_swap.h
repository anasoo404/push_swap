/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:15:13 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/17 01:24:46 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERROR -1

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int *data; // int to sort
	int size; // current size
	int capacity; // total_capacity
}	t_stack;

/*parsing*/
int		*get_stack(int ac, char **av);

/*parsing utils*/
void	free_stack(t_stack *stack);
long	my_atoi(char **str);

/*operations*/
	/*swap*/
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
	/*push*/
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
	/*rotate*/
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
	/*reverse rotate*/
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
