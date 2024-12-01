/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:24:44 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:51:57 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkchar(char const s, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static char	*filler(char *s1, char *newstr, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		newstr[i] = s1[start];
		start++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*newstr;
	size_t	i;

	start = 0;
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	if (*set == '\0')
		return (ft_strdup(s1));
	if (start == end || *s1 == '\0')
		return (ft_strdup(""));
	while (checkchar(s1[start], set) && s1[start])
		start++;
	while (checkchar(s1[end - 1], set) && end > start)
		end--;
	newstr = (char *)malloc((end - start + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	newstr = filler((char *)s1, newstr, start, end);
	return (newstr);
}
