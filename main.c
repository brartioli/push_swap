/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:35:33 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/20 16:50:06 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

t_stack	*init_node(int number)
{
	t_stack *aux;
	
	aux = malloc(sizeof(t_stack));
	aux->number = 0;
	aux->index = 0;
	aux->next = NULL;
	return (aux);
}	

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	a = init_node(ft_atoil(argv[1]));
	b = NULL;
	// if (argc == 1 || (argc == 2 && !argv[1][0]))
	// 	return (1);
	// //check_args()
	ft_printf("%i\n", a->number);
	ft_printf("%i\n", a->next->number);
	free(a);
	return (0);
	
}
