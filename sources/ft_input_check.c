/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:05 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/12 12:05:20 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long int	ft_input_check(char *argv)
{
	long int	ret;

	ret = ft_atoi(argv);
	if ((ret > MAX_INT) || (ret < MIN_INT))
		return (2147483648);
	return (ret);
}
