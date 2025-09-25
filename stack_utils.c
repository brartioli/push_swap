/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:25:06 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/25 19:54:06 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

t_stack	*add_node(t_stack **a, t_stack *new)
{
	if (!new)
		return (NULL);
	new->next = *a;
	*a = new;
	return (new);
}

t_stack	*last_node(t_stack *a)
{
	t_stack	*ptr;

	ptr = a;
	if  (!a)
		return (NULL);
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

t_stack	*add_last(t_stack **a, t_stack *new)
{
	t_stack	*ptr;
	
	if (!new)
		return (NULL);
	if (*a == NULL)
	{
		*a = new;
		return (new);
	}
	ptr = last_node(*a);
	ptr->next = new;
	return (new);
}
