/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:46:25 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/15 17:01:12 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

int		ft_error(void);
void	ft_get_index(t_element *a);
void	ft_get_stack(int argc, char**argv, t_element **a);
int		ft_input_check(char *argv);

void	ft_swap(t_element **stack);

#endif