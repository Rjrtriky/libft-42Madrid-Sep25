/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuarez- <rjuarez-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-18 19:21:45 by rjuarez-          #+#    #+#             */
/*   Updated: 2025-10-18 19:21:45 by rjuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// ========== Libraries ========== //
# include <stddef.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

// =========== Structs =========== //
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// ======= Function Prototypes ======= //

// Part 1 - Libc functions
int		ft_isalnum(int nbr);
int		ft_isalpha(int nbr);
int		ft_isascii(int nbr);
int		ft_isdigit(int nbr);
int		ft_isprint(int nbr);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, size_t len);
void	*ft_bzero(void *ptr, size_t len);
void	*ft_memcpy(void *dest, const void *org, size_t len);
void	*ft_memmove(void *dest, const void *org, size_t len);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
void	*ft_memchr(const void *str, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *str);
		// with malloc
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *ori);
// Part 2 - Additional functions
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
// Bonus part - Linked lists
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif