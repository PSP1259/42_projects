/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler@student.42.fr <pspuhler>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:32:31 by pspuhler@st       #+#    #+#             */
/*   Updated: 2026/08/16 23:54:37 by pspuhler@st      ###   ########.fr       */
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

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

/* ---------------	CHARS		--------------- */
int		ft_isalpha(int c); // done
int		ft_isdigit(int c); // done
int		ft_isalnum(int c); // done
int		ft_isascii(int c); // done
int		ft_isprint(int c); // done
int		ft_toupper(int c); // done
int		ft_tolower(int c); // done

/* ---------------	STRINGS		--------------- */
size_t	ft_strlen(const char *str); // done
char		*ft_strcpy(char *dst, const char *src); // done
char    *ft_strncpy(char *dst, char const *src, size_t size) // done
char    *strcat(char *dst, const char *src) // done
char    *strncat(char *dst, const char *src, size_t size) // done
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // done
char		*ft_strchr(const char *str, int c); // done



char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
achtung strstr
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
achtung strcmp
int		ft_strncmp(const char *s1, const char *s2, size_t n);
achtung strnew
achtung strdel
achtung strclr
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
achtung strmap
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
achtung strnequ
achtung strsub
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_strsplit(char const *s, char c);

// EXTRA STRINGS:
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* ---------------   FILE DESCRIPTORS   --------------- */
achtung putchar
achtung putstr
achtung putendl
achtung putnbr
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* ---------------	MEMORY		--------------- */
achtung memalloc
achtung memdel
 
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
achtung: memccpy
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// EXTRA MEMORY:
void	*ft_calloc(size_t count, size_t size);

/* ---------------	NUMBERS		--------------- */
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

#endif
