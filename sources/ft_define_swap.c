/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:32:40 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/18 16:32:48 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_define_swap(int argc, t_element **stack)
{
	if (argc == 3)
		ft_swap_two(stack);
	else if (argc == 4)
		ft_swap_three(stack);
	else
		ft_swap_more(stack);
}
