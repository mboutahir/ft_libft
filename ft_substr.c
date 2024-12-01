/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:40:20 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:51:43 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (j < len)
	{
		substr[j] = s[j + start];
		j++;
	}
	substr[j] = 0;
	return (substr);
}
