#include <stdio.h>
#include<stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}


int main(void)
{
    char *strs[] = {"Hello", "world", "from", "caca"};
    char *sep = "_";
    int size = 3;
    
    char *result = ft_strjoin(size, strs, sep);
   
    printf("Joined string: %s\n", result);
    free(result);
    
    return 0;
}