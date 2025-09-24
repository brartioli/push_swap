/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:35:33 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/23 21:14:19 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

t_stack	*init_node(int number)
{
	t_stack *aux;
	
	aux = malloc(sizeof(t_stack));
	if (!aux)
		return (NULL);
	aux->number = number;
	aux->index = 0;
	aux->next = NULL;
	return (aux);
}

void	print_stack(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		ft_printf("%i\n", tmp->number);
		tmp = tmp->next;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*tmp;
	t_stack	*lst;
	int		i;

	a = NULL;
	lst = NULL;
	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		check_is_letter(argv[i]);
		if (!(reapt_number(a)))
		{
			ft_printf("Error\n");
			exit (1);
		}
		tmp = init_node(ft_atoil(argv[i]));
		if (!a)
			a = tmp;
		else
			lst->next = tmp;
		lst = tmp;
		i++;
	}
	// tmp = a;
	// while (tmp)
	// {
	// 	ft_printf("%i\n", tmp->number);
	// 	tmp = tmp->next;
	// }
	print_stack (a);
	return (0);
}
