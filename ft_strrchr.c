/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 07:48:39 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/14 06:19:07 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     printf("%s\n", ft_strrchr("123453ab", '1'));
//     printf("%s\n", ft_strrchr("123453ab", '3'));
//     printf("%s\n", ft_strrchr("123453ab", '\0'));
//     if (ft_strrchr("123453ab", 'c') == NULL)
//         printf("NULL\n");
// }
