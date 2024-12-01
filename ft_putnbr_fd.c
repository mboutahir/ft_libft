/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:32:31 by mboutahi          #+#    #+#             */
/*   Updated: 2024/11/12 17:58:03 by mboutahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	total;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 10 && n >= 0)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		total = (n % 10) + '0';
		write(fd, &total, 1);
	}
}
