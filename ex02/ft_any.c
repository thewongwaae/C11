/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:28:50 by hwong             #+#    #+#             */
/*   Updated: 2022/09/07 21:14:33 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/*
int	ft(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	**array;
	int		i;

	i = 0;
	array = malloc(3 * sizeof(char *));
	array[0] = "A";
	array[1] = "Z";
	array[2] = NULL;
	while (i < 3)
	{
		printf("%d\n", ft_any(&array[i], ft));
		i++;
	}
	i = 0;
	free(array);
	return (0);
}
*/