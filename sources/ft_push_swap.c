/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:49:55 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/20 14:14:52 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_element	*stack;

	if (argc < 3)
		return (EXIT_FAILURE);
	else
	{
		ft_get_stack(argc, argv, &stack);
		ft_get_index(stack);
		ft_define_swap(argc, &stack);
	}
	return (EXIT_SUCCESS);
}
