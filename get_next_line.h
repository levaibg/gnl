/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:44:40 by lloginov          #+#    #+#             */
/*   Updated: 2024/08/08 18:57:40 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strncpy(char *s1, char *s2, char c);
char	*ft_strcpy(char *a, char *b);
char	*ft_strchr(const char *s, int c);
char	*ft_split(char *src, char car);
size_t	ft_strlen(char *str);
char *ft_ligne(int fd, char *ligne, char *buffer);

#endif
