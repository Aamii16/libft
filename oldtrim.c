/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 02:58:52 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/01 03:51:22 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isset(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*trim;

	i = -1;
	len = ft_strlen(s1);
	while (s1[++i])
	{
		if (isset(set, s1[i]))
			len--;
	}
	trim = (char *)malloc((len + 1) * sizeof(char));
	if (trim == NULL)
		return (trim);
	i = -1;
	j = -1;
	while (s1[++i] && j < len)
	{
		if (isset(set, s1[i]))
			continue ;
		trim[++j] = s1[i];
	}
	trim[len] = '\0';
	return (trim);
}
/*int main()
{
	char *set= "aoei";
	char *s = "kamiko";
	char *t = ft_strtrim(s, set);
	puts(t);
}*/
