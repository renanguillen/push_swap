/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:49:55 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/13 21:29:46 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_element *stack)
{
	t_element	*x;
	t_element	*y;

	x->value = stack->value;
	x->index = stack->index;
	stack->value = stack->next->value;
	stack->index = stack->next->index;
	stack->next->value = x->value;
	stack->next->index = x->index;
}
// void	ft_swap_three(t_element *stack)
// {
// 	if	(stack)
// }

void	ft_swap_two(t_element *stack)
{
	if (stack->value < stack->next->value)
		exit(EXIT_SUCCESS);
	else
		ft_swap(stack);
}

void	ft_define_swap(int argc, t_element *stack)
{
	if (argc == 3)
		ft_swap_two(stack);
	else if (argc == 4)
		return ;
	else
		return ;
}

int	main(int argc, char **argv)
{
	t_element	*stack;

	if (argc < 3)
		return (EXIT_FAILURE);
	else
	{
		ft_get_stack(argc, argv, &stack);
		ft_get_index(stack);
		ft_define_swap(argc, stack);
	}
	while (stack)
	{
		ft_printf("%d:%d - index:%d\n",
			stack->position, stack->value, stack->index);
		stack = stack->next;
	}
	return (EXIT_SUCCESS);
}
