/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:35:33 by bfernan2          #+#    #+#             */
/*   Updated: 2025/09/27 12:02:06 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

t_stack	*init_node(int number)
{
	t_stack	*aux;

	aux = malloc(sizeof(t_stack));
	if (!aux)
		return (NULL);
	aux->number = number;
	aux->index = 0;
	aux->next = NULL;
	return (aux);
}

static void	print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%i\n", stack->number);
		stack = stack->next;
	}
}

static t_stack	*build_stack(int argc, char *argv[])
{
	t_stack	*a;
	long	value;
	int		i;
	int		j;
	char	**args;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		j = 0;
		args = ft_split(argv[i], ' ');
		while (args[j])
		{
			check_is_letter(args[j]);
			value = ft_atoil(args[j]);
			if (repeat_number(a, value))
			{
				ft_printf("Error\n");
				exit (1);
			}
			add_last(&a, init_node(value));
			j++;
		}
		i++;
	}
	return (a);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	
	b = NULL;
	if (argc < 2)
		return (0);
	a = build_stack(argc, argv);
	ra(&a);
	print_stack(a);
	return (0);
}
