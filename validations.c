/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 16:30:09 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/23 21:20:52 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

long	ft_atoil(const char *nptr)
{
	long	res;
	long	sign;

	res = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		if ((sign == 1 && res > INT_MAX) || (sign == -1 && -res < INT_MIN))
		{
			ft_printf("Error\n");
			exit (1);
		}
		nptr++;
	}
	return (res * sign);
}
int	check_is_letter(char *str)
{
	int	i;
	
	if (!str || !str[0])
		exit (1);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		exit (1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_printf("Error\n");
			exit (1);
		}
		i++;
	}
	return (0);
}

int	reapt_number(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*check;
	
	tmp = a;
	while (tmp)
	{
		check = tmp->next;
		while (check)
		{
			if (tmp->number == check->number)
			{
				ft_printf("Error\n");
				exit (1);
			}
			check = tmp->next;
		}
		tmp = tmp->next;
	}
	return (0);
}
