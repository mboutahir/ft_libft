/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:56:45 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:53:31 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*arr;
	size_t			i;

	arr = b;
	i = 0;
	while (i < len)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
