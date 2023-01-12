/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 05:44:08 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/12 10:36:55 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char c, char const *set)
{
	size_t	len;
	int		i;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	trimmed_len(char const *s, char const *set)
{
	size_t	len;
	size_t	slen;
	int		i;

	len = 0;
	slen = ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		if (!is_inset(s[i], set))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	nlen;
	size_t	slen;
	int		ni;
	int		si;

	if (s1 == NULL || set == NULL)
		return (NULL);
	nlen = trimmed_len(s1, set);
	slen = ft_strlen(s1);
	new = ft_calloc(nlen + 1, sizeof(char));
	if (new == NULL)
		return (NULL);
	ni = 0;
	si = 0;
	while (ni < nlen)
	{
		if (!is_inset(s1[si], set))
		{
			new[ni] = s1[si];
			ni++;
		}
		si++;
	}
	return (new);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("   12 3 45   ", " "));
// 	printf("%s\n", ft_strtrim("   12 3 45   ", " 123"));
// 	printf("%s\n", ft_strtrim("   12 3 45   ", " 12345"));
// 	printf("%s\n", ft_strtrim("   12 3 45   ", NULL));
// 	printf("%s\n", ft_strtrim(NULL, "123"));
// }
