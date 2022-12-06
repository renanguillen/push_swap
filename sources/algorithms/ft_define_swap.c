/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:32:40 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 12:09:57 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_define_swap(t_element **stack_a)
{
	int			len_a;
	t_element	*stack_b;

	stack_b = NULL;
	len_a = ft_stacklen(stack_a);
	if (len_a == 2)
		ft_swap_two(stack_a, &stack_b);
	else if (len_a == 3)
		ft_swap_three(stack_a, &stack_b);
	else
		ft_swap_more(stack_a, &stack_b, len_a);
}
