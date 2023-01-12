/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 07:48:39 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/11 08:36:15 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	int		i;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)&(s[len]));
	i = len - 1;
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char *s = "123453ab";
//     printf("%c\n", *(strrchr(s, '3') + 1));
//     printf("%c\n", *(strrchr(s, '\0') - 1));
//     if (ft_strrchr(s, 'c') == NULL)
//         printf("NULL\n");
// }
