/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:51:05 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/16 00:32:42 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list);
	if (!new)
		return (NULL);
	new.content = malloc(sizeof(content));
	if (!new.content)
		return (NULL);
	new->content = *content;
	new.next = NULL;
	return (new);

}
