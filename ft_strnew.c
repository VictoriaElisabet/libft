/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:15:39 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/29 15:31:30 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *str;

	str = (char*)s;
	while (n)
	{
		*str = '\0';
		str++;
		n--;
	}
}

void	*ft_memalloc(size_t size)
{
	void *memarea;

	memarea = (void*)malloc(sizeof(void) * size);
	if (memarea)
	{
		ft_bzero(memarea, size);
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
