/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:05 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/11/28 18:18:21 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_input_check(char *argv)
{
	long int	ret;

	ret = ft_atoi(argv);
	if ((ret > MAX_INT) || (ret < MIN_INT))
		ft_error();
	return ((int)ret);
}
