/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:47:09 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/11 08:46:37 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)buf1)[i] = ((unsigned char *)buf2)[i];
		i++;
	}
	return (buf1);
}
