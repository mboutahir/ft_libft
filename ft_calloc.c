/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:06:42 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/06 15:12:16 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*pt;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > 0 && size > (~(size_t)0 / count))
		return (NULL);
	pt = malloc(count * size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, count * size);
	return (pt);
}
