/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:07:57 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:57:19 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0) 
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*filler(char *str, int len, int n, int sign)
{
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_numlen(n);
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	if (sign == -1)
		n = -n;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = filler(str, len, n, sign);
	return (str);
}
