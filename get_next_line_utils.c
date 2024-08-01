/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:46:28 by lloginov          #+#    #+#             */
/*   Updated: 2024/08/01 18:45:48 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_split(char *src, char car)
{
	int	i;
	int	j;
	char *str;

	i = 0;
	j= 0;

	if(ft_strchr(src, car) == NULL)
		return(src);
	while(src[j] != car &&  src[j] != '\0')
		j++;
	str = malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	while(i < j)
	{
		str[i] = src[i];
		i++;
	}
	free(src);
	str[i] = '\0';
	return (str);
}

char *ft_strchr(const char *s, int c) 
{
    while (*s) 
	{
        if (*s == (char)c) 
			return (char *)s;
        s++;
    }
    return (c == '\0') ? (char *)s : NULL;
}


char *ft_strcpy(char *a, char *b)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (a[i] != '\0')
		i++;
	
	while (a[i] && b[j])
	{
		a[i] = b[j];
		i++;
	}

	return (a);
}


char *ft_strncpy(char *s1, char*s2, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s2[i] && s2[i] != c)
	{
		i++;
	}
	if(ft_strlen(s2) == i)
		return(NULL);
	i++;
	while (s2[i])
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return(s1);
}
