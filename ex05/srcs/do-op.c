/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:36:56 by hwong             #+#    #+#             */
/*   Updated: 2022/09/08 09:06:59 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	do_math(int a, char *op, int b)
{
	int	output;

	output = 0;
	if (*op == '+')
		output = add(a, b);
	else if (*op == '-')
		output = sub(a, b);
	else if (*op == '*')
		output = mult(a, b);
	else if (*op == '/')
		output = div(a, b);
	else if (*op == '%')
		output = mod(a, b);
	return (output);
}

void	do_op(char *num1, char *op, char *num2)
{
	int	a;
	int	b;
	int	output;

	a = ft_atoi(num1);
	b = ft_atoi(num2);
	output = 0;
	if (!(*op == '+' || *op == '-' || *op == '*' || *op == '/' || *op == '%'))
		write(1, "0", 1);
	else if (*op == '/' && b == 0)
		write(1, "Stop : division by zero", 23);
	else if (*op == '%' && b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		output = do_math(a, op, b);
		ft_putnbr(output);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
