/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:44:40 by lloginov          #+#    #+#             */
/*   Updated: 2024/08/01 18:13:38 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char *get_next_line(int fd);
void ft_bzero(void *s, size_t n);
int ft_free(char *str);
char *ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char *get_next_line(int fd);
char *ft_strncpy(char *s1, char*s2, char c);
char *ft_strcpy(char *a, char *b);
char	*ft_strchr(const char *s, int c);
char	*ft_split(char *src, char car);
size_t	ft_strlen(char *str);


#endif
