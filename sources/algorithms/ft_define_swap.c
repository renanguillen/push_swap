/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:32:40 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 11:57:09 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_define_swap(t_element **stack)
{
	int	count;

	count = ft_stacklen(stack);
	if (count == 2)
		ft_swap_two(stack);
	else if (count == 3)
		ft_swap_three(stack);
	else
		ft_swap_more(stack, count);
}
