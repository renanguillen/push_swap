/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:45:05 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/10 11:14:35 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	entry_check (int argc, char **argv, t_element *a)
{
	if (argc < 3)
		exit (0);
	else
	{
		while (--argc)
		{
			a->value = ft_atoi(*++argv);
			ft_printf("%d\n", a->value);
		}
	}
}

int	main(int argc, char **argv)
{
	t_element	*a;
	t_element	*b;

	a = ft_calloc((argc - 1), sizeof(t_element));
	b = ft_calloc((argc - 1), sizeof(t_element));
	entry_check(argc, argv, a);
	ft_pointerfree(a);
	ft_pointerfree(b);
	return (0);
}
