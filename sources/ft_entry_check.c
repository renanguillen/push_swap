/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_entry_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:49:55 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/10 20:58:58 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_entry_check(int argc, char **argv)
{
	int			stack_pos;
	t_element	*a;

	stack_pos = 0;
	if (argc < 3)
		exit (EXIT_FAILURE);
	else
	{
		--argc;
		a = ft_lstnew(ft_limits_check(*++argv), stack_pos++);
		while (--argc)
			ft_lstadd_back(&a,
				ft_lstnew(ft_limits_check(*++argv), stack_pos++));
	}
	ft_get_index(a);
	while (a)
	{
		ft_printf("%d:%d - index:%d\n", a->stack_pos, a->value, a->index);
		a = a->next;
	}
}
