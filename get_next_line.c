/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:46:18 by lloginov          #+#    #+#             */
/*   Updated: 2024/07/01 15:43:25 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

char *reqd(int fd, void buffer, int size)
{
	int byte_read;
	buffer = (char*)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if(buffer == NULL)
		return(NULL);
	byte_read = read(fd,buffer,size);
	if (byte_read = -1)
		return (NULL);
	ft_strjoin(buffer,)
	
}

char *get_next_line(int fd)
{
	static char    buffer;
    char    *ligne;
	
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	
	buffer = reqd(fd, buffer, BUFFER_SIZE + 1);
		if(!buffer)
			return (NULL);
}

int main(void)
{
	int fd;
	fd = 0;

	fd =open("test.txt", O_RDONLY);
	printf("%s \n",get_next_line(fd));


	close(fd);
}