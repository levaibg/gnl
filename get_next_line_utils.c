/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:46:28 by lloginov          #+#    #+#             */
/*   Updated: 2024/07/12 18:43:54 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	char	*i;

	i = s;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && (count * size) / count != size)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);	
	size_t n;
	char	*i;

	n = count * size;
	i = ptr;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
	return (ptr);
}

char *ft_strjoin(char *s1, char *s2)
{
	
}

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return((char *)s);
}


char *ft_strcpy(char *a, char *b)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	
	while (a[i] && b[j])
	{
		a[i] = b[j]
	}
	a[i] = '\0';
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
