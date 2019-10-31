/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:26:57 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/31 13:53:13 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = ft_strlen((char*)src);
	while (*dst != '\0' && dstsize > 0)
	{
		dst++;
		i++;
		dstsize--;
	}
	while (dstsize > 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	if (dstsize == 1 || dstsize == 0)
		*dst = '\0';
	return (strlen + i);
}
