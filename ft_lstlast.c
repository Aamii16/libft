/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:33:15 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/19 23:36:03 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst(last(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!(lst->next))
			break;
		lst = lst->next;	
	}
	return (lst);	
}
