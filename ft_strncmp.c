/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:06:06 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/11 18:57:36 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str[] = "ABC";
//     printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
//     printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
//     printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
//     printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
//     printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
//     printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
//     printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
//     return (0);
// }
