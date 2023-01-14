/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:26:57 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 04:20:45 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found(const char *substr, const char *needle, int nlen)
{
	int	i;

	i = 0;
	while (i < nlen)
	{
		if (substr[i] == needle[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hlen;
	size_t	nlen;
	size_t	i;

	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	if (len < nlen)
		return (NULL);
	if (len > hlen)
		len = hlen;
	i = 0;
	while (i < len - nlen + 1)
	{
		if (found(haystack + i, needle, nlen))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("123456789", "789", 9));
// 	printf("%s\n", ft_strnstr("123456789", "234", 5));
// 	printf("%s\n", ft_strnstr("123456789", "345", 5));
// 	printf("%s\n", ft_strnstr("123456789", "abc", 5));
// 	printf("%s\n", ft_strnstr("", "", 10));
// 	printf("%s\n", strnstr("123456789", "789", 9));
// 	printf("%s\n", strnstr("123456789", "234", 5));
// 	printf("%s\n", strnstr("123456789", "345", 5));
// 	printf("%s\n", strnstr("123456789", "abc", 5));
// 	printf("%s\n", strnstr("", "", 10));
// }
