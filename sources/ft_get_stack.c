/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:16:31 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/24 14:53:19 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_stack(int argc, char**argv, t_element **stack_a)
{
	--argc;
	*stack_a = ft_lstnew(ft_input_check(*++argv));
	while (--argc)
		ft_lstadd_back(stack_a,
			ft_lstnew(ft_input_check(*++argv)));
}
