/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:46:18 by lloginov          #+#    #+#             */
/*   Updated: 2024/08/01 18:28:04 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void ft_bzero(void *s, size_t n)
{
	char *i;

	i = s;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
}

int ft_free(char *str)
{
	free(str);
	return(0);
}

char *ft_strdup(char *s1)
{
	char *s2;
	size_t i;

	i = 0;
	s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}


char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

char *get_next_line(int fd)
{
	int		i;
	char	*ligne;
	char	buffer[BUFFER_SIZE + 1];
	static char gnl[BUFFER_SIZE + 1];
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	ligne = ft_strdup(gnl);
	ft_bzero(&gnl, BUFFER_SIZE + 1);
	while (ft_strchr(ligne,'\n')==NULL)
	{
		i = read(fd, &buffer, BUFFER_SIZE);
			if(i == 0)
				break;
		if(i < 0 && ft_free(ligne))
			return(NULL);
		buffer[i] = '\0';
		ligne = (ft_strjoin(ligne, buffer));
	}
	ft_strncpy(gnl,ligne,'\n');
	ligne = ft_split(ligne,'\n');
	if(ft_strlen(ligne) == 0 && ft_free(ligne))
		return (NULL);
	return (ligne);
}

int main(void)
{
	int fd;
	fd = 0;

	fd = open("test.txt", O_RDONLY);
	printf("%s \n", get_next_line(fd));
	printf("%s \n", get_next_line(fd));
	printf("%s \n", get_next_line(fd));
	printf("%s \n", get_next_line(fd));

	close(fd);
}