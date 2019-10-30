/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:05:46 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/30 11:44:45 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *ptr;

	ptr = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (ptr);
}

int		ft_strlen(char *str)
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

void	*ft_memalloc(size_t size)
{
	void *memarea;

	memarea = (void*)malloc(sizeof(void) * size);
	if (memarea)
	{
		return (memarea);
	}
	else
		return (NULL);
}

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size + 1);
	if (str)
	{
		return (str);
	}
	else
		return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str1;
	char *str2;
	char *new;

	str1 = (char*)s1;
	str2 = (char*)s2;
	new = ft_strnew((ft_strlen(str1) + ft_strlen(str2)));
	new = ft_strcat(str1, str2);
	if (new)
		return (new);
	else
		return (NULL);
}
