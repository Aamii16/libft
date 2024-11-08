/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:40:06 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/08 14:23:27 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*mapi;

	i = 0;
	mapi = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mapi)
		return (NULL);
	while (s[i])
	{
		mapi[i] = (*f)(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
