/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:18:11 by hwong             #+#    #+#             */
/*   Updated: 2022/09/07 21:31:21 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sorted(int arg1, int arg2)
{
	if (arg1 < arg2)
		return (-1);
	else if (arg1 == arg2)
		return (0);
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
