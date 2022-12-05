/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 12:16:57 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap_more(t_element **stack_a, t_element **stack_b, int stack_lenght_a)
{
	ft_first_send(stack_a, stack_b, stack_lenght_a);
	stack_lenght_a = ft_stacklen(stack_a);
	ft_swap_three(stack_a, stack_b);
	ft_get_target(stack_a, stack_b);
	ft_get_costs(stack_lenght_a, stack_b);
	ft_print_stack(stack_a, 'A');
	ft_print_stack(stack_b, 'B');
	return ;
}
