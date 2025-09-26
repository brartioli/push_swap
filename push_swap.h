/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:35:13 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/25 20:50:05 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		main(int argc, char *argv[]);
long	ft_atoil(const char *nptr);
int		check_is_letter(char *str);
int		repeat_number(t_stack *a, int number);
t_stack	*add_node(t_stack **a, t_stack *new);
t_stack	*last_node(t_stack *a);
t_stack	*add_last(t_stack **a, t_stack *new);

#endif
