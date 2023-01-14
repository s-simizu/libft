/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 03:09:44 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/14 09:12:48 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	addmap(t_list **new, t_list *lst, void *(*f)(void *))
{
	t_list	*node;

	if (lst == NULL)
		return (0);
	node = ft_lstnew(f(lst->content));
	if (node == NULL)
		return (-1);
	ft_lstadd_back(new, node);
	return (addmap(new, lst->next, f));
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new = NULL;
	if (addmap(&new, lst, f) == -1)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	return (new);
}

// #include <stdio.h>
// void	test_print(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// void	*upper(void *content)
// {
// 	size_t			len;
// 	unsigned int	i;
// 	char			*s;

// 	s = ft_strdup((const char *)content);
// 	len = ft_strlen(s);
// 	i = 0;
// 	while (i < len)
// 	{
// 		s[i] = ft_toupper(s[i]);
// 		i++;
// 	}
// 	return ((void *)s);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*mapped;

// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("aiueo")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("bazz")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("carry")));
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("zoo")));
// 	ft_lstiter(lst, test_print);
// 	printf("\n");
// 	mapped = ft_lstmap(lst, upper, del);
// 	ft_lstiter(mapped, test_print);
// 	printf("%d\n", ft_lstsize(mapped));
// 	printf("%s\n", (const char *)(ft_lstlast(mapped)->content));
// 	ft_lstclear(&lst, del);
// 	ft_lstclear(&mapped, del);
// }
