/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmaili <asmaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:15:13 by asmaili           #+#    #+#             */
/*   Updated: 2025/12/25 21:36:25 by asmaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERROR -1
# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	capacity;
	int	size;
	int	*data;
}	t_stack;

/*parsing*/
int		check_input(char *av, int *capacity);
int		get_capacity(int ac, char **av);
void	fill_data(t_stack *a, char **av);
int		has_double(t_stack *a);
t_stack	*get_stack(int ac, char **av);
t_stack	*get_b(t_stack *a);
/*parsing utils*/
int		ft_strlen(char *str);
void	free_stack(t_stack *stack);
int		is_num(int c);
int		is_sign(int c);
long	my_atol(char **str);

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
void	r_without_write(t_stack *stack);
void	rr(t_stack *a, t_stack *b);
	/*reverse rotate*/
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rr_without_write(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);

/*algo*/
void	push_half_of_a_data_to_b(t_stack *a, t_stack *b);
int		tranform_data_in_index(t_stack *a);

#endif
