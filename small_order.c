/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:20:48 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/11 17:24:06 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	already_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->number > a->next->number)
			return (0);
		a = a->next;
	}
	return (1);
}

void	one_element(t_stack *a)
{
	if (!a || !a->next)
	{
		free_stack(&a);
		exit (0);
	}
}

// void	two_element(t_stack *a, t_stack *b)
// {
// 	if (a && a->next)
// 	{
// 		if(a->number )
// 	}	
// }