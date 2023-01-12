/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 06:16:06 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/12 05:36:46 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	expected;
	int		i;

	dstlen = ft_strlen(dst);
	if (dstlen < dstsize)
		expected = dstlen + ft_strlen(src);
	else
		expected = dstsize + ft_strlen(src);
	if (dstsize == 0)
		return (expected);
	i = 0;
	while (dstlen + i < dstsize - 1)
	{
		if (src[i] == '\0')
			break ;
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (expected);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char dst[15] = "0000";
//     printf("%zu\n", ft_strlcat(dst, "abc", 7));
//     printf("%s\n", dst);
//     printf("%zu\n", ft_strlcat(dst, "123456789", 10));
//     printf("%s\n", dst);
//     printf("%zu\n", ft_strlcat(dst, "123456789", 0));
//     printf("%s\n", dst);
// }
