/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:01:13 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/14 06:05:43 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	unsigned int	i;

	b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (b[i] == c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}
