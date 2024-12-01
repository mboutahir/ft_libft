/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:41:31 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/11 14:49:23 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		newstr[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		newstr[i] = s2[j];
		j++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
