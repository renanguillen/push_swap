/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:49:55 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/15 13:55:49 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_nostack(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		exit(EXIT_FAILURE);
	else
	{
		while (argv[1][i])
		{
			if (!ft_isdigit(argv[1][i]))
				ft_error();
			i++;
		}
	}
	return ;
}

int	main(int argc, char **argv)
{
	t_element	*stack;

	if (argc < 3)
		ft_nostack(argc, argv);
	else
	{
		ft_get_stack(argc, argv, &stack);
		ft_get_index(&stack);
		ft_is_sorted(&stack);
		ft_define_swap(&stack);
		ft_free_memory(&stack);
	}
	return (EXIT_SUCCESS);
}
