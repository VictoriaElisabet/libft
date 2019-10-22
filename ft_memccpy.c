/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:24:52 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/22 14:08:21 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char value;
	char *s1;
	char *s2;

	value = (char)c;
	s1 = (char*)dst;
	s2 = (char*)src;
	while (n)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
		if (*s2 == value)
		{
			*s1 = *s2;
			s1++;
			return (s1);
		}
	}
	return (NULL);
}
