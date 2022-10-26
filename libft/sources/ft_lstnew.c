/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:47:34 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/26 15:50:40 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_element	*ft_lstnew(int value)
{
	t_element	*new;

	new = (t_element *)malloc(sizeof(t_element));
	if (!new)
		return (NULL);
	new->value = value;
	new->position = 0;
	new->target = 0;
	new->next = NULL;
	return (new);
}
