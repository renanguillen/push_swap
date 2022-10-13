/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:29:06 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/12 09:55:45 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long int	ft_atoi(const char *str)
{
	long int	nbr;
	long int	sign;

	nbr = 0;
	sign = 1;
	if (*str == 45)
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (ft_isdigit(*str))
			nbr = (nbr * 10) + (*str++ - 48);
		else
		{
			nbr = 2147483649;
			break ;
		}
	}
	return (nbr * sign);
}
