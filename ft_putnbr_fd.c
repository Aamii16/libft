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

int	count_digits(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

void	ft_putnbr_fd(int n)
{
	long	nb;
	int	len;

	nb = n;
	if (n < 0)
	{
		nb *= -1;
		write(fd, '-', 1);
	}
	if (nb >= 9)
		
}
