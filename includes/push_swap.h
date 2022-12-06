/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:46:25 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/06 20:29:23 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include "../libft/includes/libft.h"

int		ft_error(void);
void	ft_first_send(t_element **stack_a, t_element **stack_b, int quant);
void	ft_get_costs(int stack_lenght_a, t_element **stack_b);
void	ft_get_index(t_element **stack);
int		ft_check_lower_cost(t_element **stack_b);
void	ft_execute_swap(t_element **stack_a, t_element **stack_b, int position);
void	ft_get_position(t_element **stack);
void	ft_get_stack(int argc, char**argv, t_element **a);
void	ft_get_target(t_element **stack_a, t_element **stack_b);
int		ft_input_check(char *argv);
int		ft_stacklen(t_element **stack);
void	ft_print_stack(t_element **stack, char c);

void	ft_define_swap(t_element **stack);
void	ft_swap_two(t_element **stack_a, t_element **stack_b);
void	ft_swap_three(t_element **stack_a, t_element **stack_b);
void	ft_swap_more(t_element **stack_a, t_element **stack_b, int stacklen);

void	ft_push(t_element **stack_a, t_element **stack_b, char c);
void	ft_rotate(t_element **stack_a, t_element **stack_b, char c);
void	ft_rrotate(t_element **stack_a, t_element **stack_b, char c);
void	ft_swap(t_element **stack, char c);

#endif