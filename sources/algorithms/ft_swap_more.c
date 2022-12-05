/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 11:48:42 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap_more(t_element **stack_a, int stackLenght)
{
	t_element	*stack_b;

	stack_b = NULL;
	ft_first_send(stack_a, &stack_b, stackLenght);
	stackLenght = ft_stacklen(stack_a);
	ft_swap_three(stack_a);
	ft_get_target(stack_a, &stack_b);
	ft_get_costs(stackLenght, &stack_b);
	ft_print_stack(stack_a, 'A');
	ft_print_stack(&stack_b, 'B');
	return ;
}
