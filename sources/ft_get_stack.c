/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:16:31 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/12 12:04:57 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_stack(int argc, char**argv, t_element **stack_a)
{
	long int	content;

	content = (ft_input_check(*++argv));
	if (content == (21474836478))
		ft_error();
	--argc;
	*stack_a = ft_lstnew((int)content);
	while (--argc)
	{
		content = ft_input_check(*++argv);
		if (content == (2147483648))
		{
			ft_free_memory(stack_a);
			ft_error();
		}
		ft_lstadd_back(stack_a, ft_lstnew((int)content));
	}
}
