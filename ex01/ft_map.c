/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:27:57 by hwong             #+#    #+#             */
/*   Updated: 2022/09/07 21:03:21 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
int	increment(int nb)
{
	return (nb + 1);
}
*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(sizeof(int) * length);
	if (!array)
		return (0);
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}

/*
int	main(void)
{
	int	i;
	int	*tab;
	int	len;
	int	*res;

	len = 10;
	tab = (int *)malloc(sizeof(int) * len);
	// create array containing 0 ~ 9
	i = 0;
	while (i < len)
	{
		tab[i] = i;
		i++;
	}
	// apply function to each index of array
	res = ft_map(tab, len, &increment);
	i = 0;
	while (i < len)
	{
		printf("\n%i", res[i]);
		i++;
	}
	free(tab);
}
*/