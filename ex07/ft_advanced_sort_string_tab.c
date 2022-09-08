/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:24:43 by hwong             #+#    #+#             */
/*   Updated: 2022/09/08 09:37:31 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	int		index;
	char	**tab;

	tab = (char **)malloc(7 * sizeof(char *));
	tab[0] = strdup("I");
	tab[1] = strdup("hello");
	tab[2] = strdup("3");
	tab[3] = strdup("test");
	tab[4] = strdup("b");
	tab[5] = strdup("42");
	tab[6] = 0;
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] %p = %s\n", index, tab + index, tab[index]);
		index++;
	}
	ft_advanced_sort_string_tab(tab, ft_strcmp);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] %p = %s\n", index, tab + index, tab[index]);
		index++;
	}
}
*/