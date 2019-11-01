/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:18:21 by vgrankul          #+#    #+#             */
/*   Updated: 2019/11/01 13:35:26 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_mystrcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

char			*ft_strdup(char *src)
{
	char *arr;

	arr = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (arr)
	{
		ft_mystrcpy(arr, src);
	}
	else
	{
		return (NULL);
	}
	return (arr);
}
