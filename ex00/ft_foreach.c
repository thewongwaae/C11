/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:53:17 by hwong             #+#    #+#             */
/*   Updated: 2022/09/07 21:03:33 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putnbr(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*
#include <stdlib.h>
int	main(void)
{
	int	i;
	int	*tab;
	int	length;

	length = 10;
	tab = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, length, &ft_putnbr);
	free(tab);
}
*/