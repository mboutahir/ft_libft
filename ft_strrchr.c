/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:28:37 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 18:07:45 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0; 
	last = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (last != -1)
		return ((char *)&s[last]);
	else
		return (NULL);
}
