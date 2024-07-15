/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:44:40 by lloginov          #+#    #+#             */
/*   Updated: 2024/05/27 19:03:46 by lloginov         ###   ########.fr       */
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
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strchr(const char *s, int c);
char *ft_strcpy(char *a, char *b);

#endif
