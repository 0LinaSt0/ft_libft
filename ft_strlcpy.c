#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ls;
	size_t	i;

	if (!dst || !src)
		return (0);
	ls = ft_strlen((char *)src);
	i = 0;
	if (size > 0)
	{
		while (*src && i < size - 1)
		{
			dst[i] = *src;
			i++;
			src++;
		}
		dst[i] = '\0';
	}
	return (ls);
}