/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:54:50 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/14 05:37:58 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(unsigned int abs)
{
	size_t	len;

	len = 1;
	while (abs >= 10)
	{
		abs /= 10;
		len++;
	}
	return (len);
}

static char	*create_str(unsigned int abs, int neg, size_t len)
{
	char	*s;

	s = ft_calloc(len + neg + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	while (len > 0)
	{
		s[len + neg - 1] = (abs % 10) + '0';
		abs /= 10;
		len--;
	}
	if (neg)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	unsigned int	abs;
	size_t			len;
	int				neg;

	if (n < 0)
	{
		abs = -n;
		len = intlen(abs);
		neg = 1;
	}
	else
	{
		abs = n;
		len = intlen(abs);
		neg = 0;
	}
	return (create_str(abs, neg, len));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(0));
// }
