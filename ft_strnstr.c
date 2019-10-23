/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:27:26 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/23 14:39:32 by vgrankul         ###   ########.fr       */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && len)
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && len)
			{
				j++;
				len--;
				if (j == ft_strlen((char*)needle))
					return ((char*)&haystack[i]);
			}
		}
		i++;
		len--;
	}
	return (NULL);
}
