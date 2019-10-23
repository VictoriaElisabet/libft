/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:05:52 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/23 17:09:11 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s1;
	char *s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	if (ft_strlen(s1) > ft_strlen(s2))
	{
		while (len)
		{
			s1[len] = s2[len];
			len--;
		}
	}
	while (len)
	{
		*s1 = *s2;
		s1++;
		s2++;
		len--;
	}
	return (dst);
}
