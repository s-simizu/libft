/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:08:45 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/11 23:28:58 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc(const char *str, int i, int neg)
{
	int	val;

	val = 0;
	while (ft_isdigit(str[i]))
	{
		val *= 10;
		val -= (str[i] - '0');
		i++;
	}
	if (neg)
		return (val);
	else
		return (-val);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	i;

	neg = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (ft_isdigit(str[i]))
		;
	else if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	return (calc(str, i, neg));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", atoi("+2147483647"));
// 	printf("%d\n", atoi("-2147483648"));
// 	printf("%d\n", atoi("-2147483648999"));
// 	printf("%d\n", atoi("++123"));
// 	printf("%d\n", atoi("aiueo"));
// 	printf("%d\n", atoi("     -123      "));
// 	printf("%d\n", ft_atoi("+2147483647"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("-214748364999"));
// 	printf("%d\n", ft_atoi("++123"));
// 	printf("%d\n", ft_atoi("aiueo"));
// 	printf("%d\n", ft_atoi("     -123      "));
// }
