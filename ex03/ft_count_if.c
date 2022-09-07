/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:15:12 by hwong             #+#    #+#             */
/*   Updated: 2022/09/07 21:17:52 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			i++;
		else
			return (0);
	}
}