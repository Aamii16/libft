/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:07:30 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/08 16:29:49 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int nb)
{
	long	n;
	int		count;

	n = nb;
	count = 1;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		len;
	int		digits[11];
	int		i;

	i = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	len = count_digits(nb);
	while (len--)
	{
		digits[len] = nb % 10;
		nb /= 10;
	}
	while (i < count_digits(n))
		ft_putchar_fd(digits[i++] + '0', fd);
}
