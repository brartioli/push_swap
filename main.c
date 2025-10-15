/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:35:33 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/15 23:31:16 by bfernan2         ###   ########.fr       */
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

void	print_stack(t_stack *stack)
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
			check_is_letter(args[j], args);
			value = ft_atoil(args[j]);
			if (repeat_number(a, value))
				ft_exit_error(&a, args);
			add_last(&a, init_node(value));
			j++;
		}
		free_split(args);
		i++;
	}
	return (a);
}

void	sort(int len_a, t_stack **a, t_stack **b)
{
	if (len_a == 1)
		exit (0);
	else if (len_a == 2)
		sort_2(a);
	else if (len_a == 3)
		sort_3(a);
	else if (len_a <= 4)
		sort_5(a, b);
	else if (len_a <= 100)
		sort_100(a, b);

}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		len_a;

	if (argc < 2)
		return (0);
	a = build_stack(argc, argv);
	b = NULL;
	if (!already_sorted(a))
	{
		len_a = stack_len(a);
		sort(len_a, &a, &b);
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}
