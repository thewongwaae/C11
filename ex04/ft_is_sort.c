/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:18:11 by hwong             #+#    #+#             */
/*   Updated: 2022/09/08 08:34:08 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	sub(int a, int b)
{
	return (a - b);
}
*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while (sorted && i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	if (sorted != 1)
	{
		i = 0;
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
#include <stdio.h>
int	main(void)
{
	static int	tabx[];
	int			index;
	int			*tab;
	int			length;

	tabx[] = {7, 6, 6, 7, 5, 5, 3, 2, 2, 1, 1, 0, 0};
	length = 10;
	printf("%d\n", ft_is_sort(tabx, length, &sub));
}
*/