/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:46:25 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/21 17:57:03 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

int		ft_error(void);
void	ft_first_send(t_element **stack_a, t_element **stack_b, int quant);
void	ft_get_index(t_element *a);
void	ft_get_position(t_element **stack);
void	ft_get_stack(int argc, char**argv, t_element **a);
void	ft_get_target(t_element **stack_a, t_element **stack_b);
int		ft_input_check(char *argv);

void	ft_define_swap(int argc, t_element **stack);
void	ft_swap_two(t_element **stack);
void	ft_swap_three(t_element **stack);
void	ft_swap_more(t_element **stack_a, int argc);

void	ft_push(t_element **stack_a, t_element **stack_b, char c);
void	ft_rotate(t_element **stack, char c);
void	ft_rrotate(t_element **stack, char c);
void	ft_swap(t_element **stack, char c);

#endif