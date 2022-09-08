/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 08:07:08 by hwong             #+#    #+#             */
/*   Updated: 2022/09/08 08:48:25 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	output;
	int	sign;

	output = 0;
	sign = 1;
	if (*str)
	{
		while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		while ((*str == '+') || (*str == '-'))
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			output *= 10;
			output += *str - '0';
			str++;
		}
		return (output * sign);
	}
	return (0);
}
