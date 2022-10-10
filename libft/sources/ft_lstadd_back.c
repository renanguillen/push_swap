/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:05:16 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/10 19:27:22 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_element **stack, t_element *new)
{
	t_element	*last;

	if (!stack || !new)
		return ;
	last = ft_lstlast(*stack);
	if (last != NULL)
		last->next = new;
	else
		*stack = new;
}
