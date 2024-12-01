/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:32:41 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:58:12 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dub;

	i = 0;
	while (s1[i])
		i++;
	dub = malloc(sizeof(char) * (i + 1));
	if (dub == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dub[i] = s1[i];
		i++;
	}
	dub[i] = '\0';
	return (dub);
}
