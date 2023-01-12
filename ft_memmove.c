/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 04:04:18 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/11 08:45:59 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *buf1, const void *buf2, size_t n)
{
	int				i;

	if (buf1 < buf2)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)buf1)[i] = ((unsigned char *)buf2)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (n > 0)
		{
			((unsigned char *)buf1)[i] = ((unsigned char *)buf2)[i];
			i--;
		}
	}
	return (buf2);
}
