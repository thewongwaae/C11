/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:18:11 by hwong             #+#    #+#             */
/*   Updated: 2022/09/08 10:02:31 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while (sorted && i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		i = 0;
		sorted = 1;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/*
int	sub(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int	main(void)
{
	static int	tabx[];
	int			length;

	tabx[] = {0, 1, 2, 3, 4, 7, 8, 9, 10, 12};
	length = 10;
	printf("%d\n", ft_is_sort(tabx, length, &sub));
}
*/