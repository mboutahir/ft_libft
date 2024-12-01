/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:50:56 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:53:35 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || len == 0)
	{
		return (dst);
	}
	if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dst);
	}
	i = len;
	while (i > 0)
	{
		((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
		i--;
	}
	return (dst);
}
