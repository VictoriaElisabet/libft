/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:05:52 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/30 10:50:40 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s1;
	char *s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	if (s1 > s2)
	{
		while (len)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	else
	{
		while (len)
		{
			*s1 = *s2;
			s1++;
			s2++;
			len--;
		}
	}
	return (dst);
}
