/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:27:26 by vgrankul          #+#    #+#             */
/*   Updated: 2019/11/01 13:49:59 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char*)&haystack[i]);
	while (haystack[i] != '\0' && len--)
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && len-- && needle[j] != '\0')
			{
				if (haystack[i + j] != '\0')
					j++;
				if ((size_t)j == ft_strlen((char*)needle))
					return ((char*)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
