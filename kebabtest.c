#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *result;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = -1;
	while (s2[j++])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	free(s1);
	return (result);
}

int	main(void)
{
	char *s1 = "kebab, ";
	char *s2 = "world!";
	char *result;

	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error: ft_strjoin returned NULL\n");
	}

	return (0);
}
