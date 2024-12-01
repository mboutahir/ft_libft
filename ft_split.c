/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:35:08 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/13 14:38:21 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			count++;
		}
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	return (count);
}

static char	**filler(char **arr, char *s, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
	while (s[i] && k < counter((char *)s, c))
	{
		j = 0; 
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			arr[k][j] = s[i];
			j++;
			i++;
		}
		arr[k][j] = '\0';
		k++;
		if (s[i])
			i++;
	}
	arr[k] = NULL;
	return (arr);
}

static void	*freesplit(char **arr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++; 
	}
	free(arr);
	return (NULL);
}

static char	**spliter(char **arr, char *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		len = i;
		while (s[i] != c && s[i])
			i++;
		len = i - len;
		if (len > 0)
		{
			arr[j] = malloc((len + 1) * sizeof(char));
			if (!arr[j])
				return (freesplit(arr, j));
			j++;
		}
		if (s[i])
			i++;
	}
	return (filler(arr, (char *)s, c));
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	if (counter((char *)s, c) == 0)
	{
		arr = malloc(sizeof(char *));
		if (arr == NULL)
			return (NULL);
		arr[0] = NULL;
		return (arr);
	}
	arr = malloc((counter((char *)s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (spliter(arr, (char *)s, c));
}
