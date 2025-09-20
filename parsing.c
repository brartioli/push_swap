/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 14:38:37 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/20 15:49:03 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static int	ft_is_number(char *str)
{
	int	i;

	if(!str || !str[0])
		return(0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			return (0);
		i++;	
	}
	return (1);
}

int	atoil()
{
	
}

int	check_args(int argc, char *argv[])
{
	int		i;
	int		error;
	int		num;

	i = 1;
	while (i < argc)
	{
		if (!ft_is_number(argv[i]))
			return (0);
		if (argc == 2)
			argv = ft_split(argv[1], ' ');
			return (1);
		num = ft_atol
	}
	return(1)
}