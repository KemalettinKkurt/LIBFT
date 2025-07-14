/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 23:03:01 by kkocakur          #+#    #+#             */
/*   Updated: 2025/07/04 13:18:49 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	num;

	sign = 1;
	result = 0;
	num = 0;
	while (str[num] == 32 || (str[num] >= 9 && str[num] <= 13))
		num++;
	if (str[num] == '-' || str[num] == '+')
	{
		if (str[num] == '-')
			sign = -1;
		num++;
	}
	while (str[num] >= '0' && str[num] <= '9')
	{
		result = result * 10 + (str[num] - '0');
		num++;
	}
	return (sign * result);
}
