/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 04:04:18 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/14 06:01:04 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	int				i;

	b1 = (unsigned char *)buf1;
	b2 = (unsigned char *)buf2;
	if (b1 < b2)
	{
		i = 0;
		while (i < (int)n)
		{
			b1[i] = b2[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			b1[i] = b2[i];
			i--;
		}
	}
	return ((void *)b1);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "1234567890";
// 	char str2[] = "1234567890";

// 	ft_memmove(str1, str1 + 3, 5);
// 	ft_memmove(str2 + 3, str2, 5);

// 	printf("%s\n\n", "1234567890");
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// }
