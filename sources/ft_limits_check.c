/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:05 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/10 20:58:21 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_limits_check(char *argv)
{
	long int	ret;

	ret = ft_atoi(argv);
	if ((ret > 2147483647) || (ret < -2147483648))
		ft_error();
	return ((int)ret);
}
