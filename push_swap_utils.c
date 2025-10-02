/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 20:03:04 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/30 20:55:33 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_exit_error(t_stack **a)
{
	t_stack	*tmp;

	while (*a)
	{
		tmp = (*a)->next;
		free(*a);
		*a = tmp;
	}
	ft_printf("Error\n");
	exit (1);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free (split[i]);
		i++;
	}
	free (split);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)
		{
			tmp = (*stack)->next;
			free(*stack);
			*stack = tmp;
		}
	}
}

void	index_stack(t_stack *a)
{
	t_stack		*current;
	t_stack		*other;
	int			index;

	current = a;
	while (current)
	{
		index = 0;
		other = a;
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
