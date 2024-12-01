/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:09:43 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/11 15:08:13 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*string;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	string = (char *) malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	len = 0;
	while (s[len])
	{
		string[len] = f(len, s[len]);
		len++;
	}
	string[len] = '\0';
	return (string);
}
