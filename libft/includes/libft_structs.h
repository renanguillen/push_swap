/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_structs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 00:12:33 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/12 10:05:04 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRUCTS_H
# define LIBFT_STRUCTS_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_element
{
	int					value;
	int					index;
	int					position;
	int					target;
	int					top_a;
	int					top_b;
	struct s_element	*next;
}	t_element;

#endif