/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/11/28 17:34:14 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap_more(t_element **stack_a, int argc)
{
	t_element	*stack_b;

	stack_b = NULL;
	ft_first_send(stack_a, &stack_b, (argc - 1));
	ft_swap_three(stack_a);
	ft_get_target(stack_a, &stack_b);
	ft_print_stack(stack_a, 'A');
	ft_print_stack(&stack_b, 'B');
	return ;
}
