#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 1024


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
	while (s2[i])
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return(s1);
}


size_t ft_strlen(const char *str) {
    size_t i = 0;
    while (str[i]) i++;
    return i;
}

char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c) return (char *)s;
        s++;
    }
    return (c == '\0') ? (char *)s : NULL;
}

char *ft_strdup(const char *s1) {
    size_t len = ft_strlen(s1);
    char *s2 = malloc(len + 1);
    if (!s2) return NULL;
    for (size_t i = 0; i <= len; i++) s2[i] = s1[i];
    return s2;
}

char *ft_strjoin(const char *s1, const char *s2) {
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *result = malloc(len1 + len2 + 1);
    if (!result) return NULL;
    for (size_t i = 0; i < len1; i++) result[i] = s1[i];
    for (size_t i = 0; i <= len2; i++) result[len1 + i] = s2[i];
    return result;
}

void ft_bzero(void *s, size_t n) {
    char *p = s;
    while (n--) *p++ = 0;
}

char *ft_split(const char *src, char car) {
    size_t len = 0;
    while (src[len] && src[len] != car) len++;
    char *str = malloc(len + 1);
    if (!str) return NULL;
    for (size_t i = 0; i < len; i++) str[i] = src[i];
    str[len] = '\0';
    return str;
}

char *get_next_line(int fd) {
    if (fd < 0 || BUFFER_SIZE <= 0) return NULL;

    static char gnl[BUFFER_SIZE + 1];
    char buffer[BUFFER_SIZE + 1];
    char *ligne = ft_strdup(gnl);
    if (!ligne) return NULL;

    ft_bzero(gnl, BUFFER_SIZE + 1);

    ssize_t bytes_read;
    while (!ft_strchr(ligne, '\n')) {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0) break;
        buffer[bytes_read] = '\0';
        char *temp = ft_strjoin(ligne, buffer);
        if (!temp) {
            free(ligne);
            return NULL;
        }
        free(ligne);
        ligne = temp;
    }

    char *result = ft_split(ligne, '\n');
    if (!result) {
        free(ligne);
        return NULL;
    }

    size_t len = ft_strlen(result);
    if (len == 0) {
        free(result);
        return NULL;
    }

    ft_strncpy(gnl, ligne, '\n');
    free(ligne);
    return result;
}

int main(void) {
    int fd = open("test.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL) {
        printf("%s\n", line);
        free(line);
    }

    close(fd);
    return 0;
}
