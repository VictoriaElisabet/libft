/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:26:57 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/21 13:47:22 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strcpy(char *dst, const char *src)
{
	char *ptr;

	ptr = dst;
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ptr);
}
int	ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	if (dstsize == 0)
	{
		return(ft_strlen(dst))// add the length of the source;
	}
	while(*dst != '\0')
	{
		dst++;
		count++;
	}
//	dstsize = dstsize - count - 1;
	while((count + 1) < dstsize && *src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
		count++;
	}
	*dst = '\0';
	return (count + 1);
}
int	main(void)
{
	//char test[9];
	char s1[5] = "ja";
	char s2[6] = "jovars";
	//int len;

	//ft_strcpy(test, s1);
	//len = strlcpy(test, s1, sizeof(test));
	//printf("%zu", ft_strlcat(test, s2, len));
	printf("%zu", ft_strlcat(s1, s2, 5));
	printf("\n%s\n", s1);
	//printf("%zu", strlcat(test, s2, sizeof(test)));
	//printf("%d", len);
	//ft_strlcat(test, s2, len);
	//printf("%d", len);
	//printf("%s", test);
}
