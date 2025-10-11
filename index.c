/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:33:22 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/11 16:22:02 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	index_stack(t_stack **a)
{
	t_stack		*current;
	t_stack		*other;
	int			index;

	current = *a;
	while (current)
	{
		index = 0;
		other = *a;
		while (other)
		{
			if (other->number < current->number)
				index++;
			other = other->next;
		}
		current->index = index;
		current = current->next;
	}
}
