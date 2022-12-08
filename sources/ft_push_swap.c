/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:49:55 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/08 11:00:50 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_memory(t_element **stack)
{
	t_element	*auxiliary;

	if (!*stack)
		return ;
	while (*stack)
	{
		auxiliary = (*stack)->next;
		free(*stack);
		*stack = auxiliary;
	}
	*stack = NULL;
}

void	ft_is_sorted(t_element **stack)
{
	t_element	*auxiliary;

	if (!*stack)
		return ;
	auxiliary = *stack;
	while (auxiliary->next)
	{
		if (auxiliary->next->value > auxiliary->value)
			return ;
		auxiliary = auxiliary->next;
	}
	ft_error();
}

int	main(int argc, char **argv)
{
	t_element	*stack;

	if (argc < 3)
		return (EXIT_FAILURE);
	else
	{
		ft_get_stack(argc, argv, &stack);
		ft_is_sorted(&stack);
		ft_get_index(&stack);
		ft_define_swap(&stack);
		ft_free_memory(&stack);
	}
	return (EXIT_SUCCESS);
}
