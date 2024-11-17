/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:57:20 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/16 15:58:24 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (!count || !size)
		return (malloc(0));
	if (count > (UINT_MAX / size))
		return (NULL);
	ptr = malloc(count * size);
	ft_bzero(ptr, count * size);
	return (ptr);
}
