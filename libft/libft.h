/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler@student.42.fr <pspuhler>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:32:31 by pspuhler@st       #+#    #+#             */
/*   Updated: 2026/09/11 20:33:31 by pspuhler@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* ---------------	LISTS		--------------- */
typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void const *content, size_t content_size); // done TOP -> FALSCH
ACHTUNG ft_lstadd_front
ACHTUNG ft_lstsize
Achtung ft_lstlast
Achtung ft_lstadd_back
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem)); // done TOP -> FALSCH
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t)); // done TOP -> FALSCH
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)); // done TOP -> FALSCH
ACHTUNG ft_lstclear

/* ---------------	LISTS: Additional_libft_functions		--------------- */
// void    ft_lstdel(t_list **alst, void (*del)(void *, size_t));
// void		ft_lstadd(t_list **alst, t_list *new);



/* ---------------	CHARS		--------------- */
int			ft_isalpha(int c); // done TOP
int			ft_isdigit(int c); // done TOP
int			ft_isalnum(int c); // done TOP
int			ft_isascii(int c); // done TOP
int			ft_isprint(int c); // done TOP
int			ft_toupper(int c); // done TOP
int			ft_tolower(int c); // done TOP

/* ---------------	STRINGS		--------------- */
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str); // done TOP
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // TOP
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // done TOP
char		*ft_strchr(const char *str, int c); // done TOP
char		*ft_strrchr(const char *str, int c); // done TOP
char    *ft_strnstr(const char *b, const char *l, size_t len); // done TOP
int			ft_strncmp(const char *s1, const char *s2, size_t n); // done TOP
char		*ft_strdup(const char *s1); // done TOP
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

/* ---------------	STRINGS: Additional_libft_functions		--------------- */
// char		*ft_strcpy(char *dst, const char *src);
// char		*ft_strncpy(char *dst, char const *src, size_t size);
// char		*ft_strcat(char *dst, const char *src);
// char		*ft_strncat(char *dst, const char *src, size_t size);
// char		*ft_strstr(const char *h, const char *n);
// int		ft_strcmp(const char *s1, const char *s2);
// char		*ft_strnew(size_t size);
// void 	ft_strdel(char **as);
// void   ft_strclr(char *s);
// void		ft_striter(char *s, void (*f)(char*));
// char		*ft_strmap(char const *s, char (*f)(char));
// int    ft_strequ(char const *s1, char const *s2);
// int 		ft_strnequ(char const *s1, char const *s2, size_t n);
// char   *ft_strsub(char const *s, unsigned int start, size_t len);
// char		**ft_strsplit(char const *s, char c);



/* ---------------   FILE DESCRIPTORS   --------------- */
void		ft_putchar_fd(char c, int fd); // done TOP
void		ft_putstr_fd(char *s, int fd); // done TOP
void		ft_putendl_fd(char *s, int fd); // done TOP
void		ft_putnbr_fd(int n, int fd); // done TOP

/* ---------------	FILE DESCRIPTORS: Additional_libft_functions		--------------- */
// void		ft_putchar(char c);
// void		ft_putstr(char const *s);
// void		ft_putendl(char const *s);
// void		ft_putnbr(int n);



/* ---------------	MEMORY		--------------- */
void	*ft_calloc(size_t count, size_t size); // done TOP
void	ft_bzero(void *s, size_t n); // done TOP
void	*ft_memset(void *b, int c, size_t len); // done TOP
void	*ft_memcpy(void *dst, const void *src, size_t n); // done TOP
void	*ft_memmove(void *dst, const void *src, size_t len); // done TOP
void	*ft_memchr(const void *s, int c, size_t n); // done TOP
int		ft_memcmp(const void *s1, const void *s2, size_t n); // done TOP

/* ---------------	MEMORY: Additional_libft_functions		--------------- */
// void 	*ft_memccpy(void *dest, const void *src, int c, size_t n);
// void		*ft_memalloc(size_t size);
// void		ft_memdel(void **ap);



/* ---------------	NUMBERS		--------------- */
int		ft_atoi(const char *str); // done TOP
char	*ft_itoa(int n);

#endif
