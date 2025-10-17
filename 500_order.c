/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   500_order.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:59:38 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/16 21:13:29 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	sort_500(t_stack **a, t_stack **b)
{
	pass_to_b_500(a, b);
	pass_to_a(a, b);
}

void	pass_to_b_500(t_stack **a, t_stack **b)
{
	int	chunk;
	int	pushed;

	chunk = 120;
	pushed = 0;
	while (*a)
	{
		if ((*a)->index < chunk)
		{
			pb(a, b);
			pushed++;
			if ((*b)->index < chunk / 2)
				rb(b);
		}
		else if (pushed == chunk)
			chunk += 40;
		else
			decide_and_rotate_a(a, chunk);
	}
}
