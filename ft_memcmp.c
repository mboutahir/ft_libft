/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:37:22 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 15:53:07 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*byte1;
	unsigned char	*byte2;

	byte1 = (unsigned char *)s1;
	byte2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (byte1[i] != byte2[i])
			return (byte1[i] - byte2[i]);
		i++;
	}
	return (0);
}
