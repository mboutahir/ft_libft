/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:24:37 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:57:31 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*byte;

	byte = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (byte[i] == (unsigned char)c)
			return (&byte[i]);
		i++;
	}
	return (NULL);
}
