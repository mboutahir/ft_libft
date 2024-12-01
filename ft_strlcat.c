/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:18:34 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/07 17:49:36 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	i;

	if ((dst == NULL || src == NULL) && dstsize == 0)
	{
		return (0);
	}
	a = ft_strlen(src);
	b = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (a);
	if (b >= dstsize)
		return (dstsize + a);
	while (i < dstsize - b - 1 && src[i])
	{
		dst[b + i] = src[i];
		i++;
	}
	dst[b + i] = '\0';
	return (a + b);
}
