/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 00:51:14 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/14 09:12:38 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(char c);
int					ft_isdigit(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				*ft_calloc(size_t count, size_t size);
void				ft_bzero(void *s, size_t n);
char				*ft_itoa(int n);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
// void				ft_lstiter(t_list *lst, void (*f)(void *)); //test
// void				ft_lstadd_front(t_list **lst, t_list *new); //test
// t_list				*ft_lstlast(t_list *lst); //test
// int					ft_lstsize(t_list *lst); //test
// char	            *ft_strdup(const char *s1); //test
// int	                ft_toupper(int c); //test

#endif
