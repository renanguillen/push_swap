/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:04:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/10 19:28:40 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_element	*ft_lstlast(t_element *element)
{
	if (element == NULL)
		return (NULL);
	while (element->next != NULL)
		element = element->next;
	return (element);
}
