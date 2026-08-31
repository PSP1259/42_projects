/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler@student.42.fr <pspuhler>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:32:31 by pspuhler@st       #+#    #+#             */
/*   Updated: 2026/08/31 16:48:32 by pspuhler@st      ###   ########.fr       */
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

t_list	*ft_lstnew(void const *content, size_t content_size); // done
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t)); // done
void    ft_lstdel(t_list **alst, void (*del)(void *, size_t)); // done
void		ft_lstadd(t_list **alst, t_list *new); // done
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem)); // done
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)); // done

/* ---------------	CHARS		--------------- */
int			ft_isalpha(int c); // done
int			ft_isdigit(int c); // done
int			ft_isalnum(int c); // done
int			ft_isascii(int c); // done
int			ft_isprint(int c); // done
int			ft_toupper(int c); // done
int			ft_tolower(int c); // done

/* ---------------	STRINGS		--------------- */
size_t	ft_strlen(const char *str); // done
char		*ft_strcpy(char *dst, const char *src); // done
char    *ft_strncpy(char *dst, char const *src, size_t size); // done
char    *ft_strcat(char *dst, const char *src); // done
char    *ft_strncat(char *dst, const char *src, size_t size); // done
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // done
char		*ft_strchr(const char *str, int c); // done
char		*ft_strrchr(const char *str, int c); // done
char 		*ft_strstr(const char *h, const char *n); // done
char    *ft_strnstr(const char *b, const char *l, size_t len); // done
int 		ft_strcmp(const char *s1, const char *s2); // done
int			ft_strncmp(const char *s1, const char *s2, size_t n); // done
char		*ft_strdup(const char *s1); // done
char		*ft_strnew(size_t size); // done
void 		ft_strdel(char **as); // done
void    ft_strclr(char *s); // done
void		ft_striter(char *s, void (*f)(char*)); // done
void		ft_striteri(char *s, void (*f)(unsigned int, char*)); // done
char		*ft_strmap(char const *s, char (*f)(char)); // done
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char)); // done
int     ft_strequ(char const *s1, char const *s2); // done
int 		ft_strnequ(char const *s1, char const *s2, size_t n); // done
char    *ft_strsub(char const *s, unsigned int start, size_t len); // done -> schwierig
char		*ft_strjoin(char const *s1, char const *s2); // done -> schwierig
char		*ft_strtrim(char const *s1, char const *set); // done -> schwierig
char		**ft_strsplit(char const *s, char c); // done -> ultra schwierig

// EXTRA STRINGS:
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_substr(char const *s, unsigned int start, size_t len);

/* ---------------   FILE DESCRIPTORS   --------------- */
void		ft_putchar(char c); // done
void		ft_putstr(char const *s); // done
void		ft_putendl(char const *s); // done
void		ft_putnbr(int n); // done
void		ft_putchar_fd(char c, int fd); // done
void		ft_putstr_fd(char *s, int fd); // done
void		ft_putendl_fd(char *s, int fd); // done
void		ft_putnbr_fd(int n, int fd); // done

/* ---------------	MEMORY		--------------- */
void	*ft_memset(void *b, int c, size_t len); // done
void	ft_bzero(void *s, size_t n); // done
void	*ft_memcpy(void *dst, const void *src, size_t n); // done
void *ft_memccpy(void *dest, const void *src, int c, size_t n); // done
void	*ft_memmove(void *dst, const void *src, size_t len); // done
void	*ft_memchr(const void *s, int c, size_t n); // done
int		ft_memcmp(const void *s1, const void *s2, size_t n); // done	
void	*ft_memalloc(size_t size); // done
void	ft_memdel(void **ap); // done


// EXTRA MEMORY:
void	*ft_calloc(size_t count, size_t size); // done

/* ---------------	NUMBERS		--------------- */
int		ft_atoi(const char *str); // done
char	*ft_itoa(int n); // done

#endif
