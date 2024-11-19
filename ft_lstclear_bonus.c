/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 00:06:02 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/20 00:09:15 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	tmp;

	if (!lst || !(*lst) || !del)
		return ;
	while (lst)
	{
		tmp = lst->next;
		ft_lstdelnode(lst, del);
		lst = tmp;
	}
}
