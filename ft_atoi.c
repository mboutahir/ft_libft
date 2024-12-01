/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:51:51 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:56:32 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	total;
	int	j;
	int	i;

	i = 0; 
	j = 1;
	total = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		total = 10 * total +(str[i] - '0');
		i++;
	}
	if (j == -1)
		return (-total);
	return (total);
}
