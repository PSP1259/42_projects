/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler@student.42.fr <pspuhler>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:34:28 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/19 17:30:24 by pspuhler@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*strjoin_helper(char *stash, char *buffer, char *s3);
char	*ft_strjoin(char *stash, char *buffer);
int		ft_strlen(char *s);

#endif
