/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:05:46 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/31 14:06:14 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_modmemalloc(size_t size)
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

static char	*ft_modstrnew(size_t size)
{
	char *str;

	str = ft_modmemalloc(size + 1);
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
	new = ft_modstrnew((ft_strlen(str1) + ft_strlen(str2)));
	new = ft_strcat(str1, str2);
	if (new)
		return (new);
	else
		return (NULL);
}
