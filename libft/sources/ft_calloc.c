/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:59:14 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/14 16:10:36 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ans;
	size_t	total;

	total = nmemb * size;
	if (size > __SIZE_MAX__ / nmemb)
		return (NULL);
	ans = malloc(total);
	if (!ans)
		return (NULL);
	ft_bzero(ans, total);
	return ((void *)ans);
}
