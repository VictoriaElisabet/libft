/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:42:19 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/23 13:05:37 by vgrankul         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	value;
	int		len;

	str = (char*)s;
	value = (char)c;
	len = ft_strlen(str);
	while (str[len - 1] > 0)
	{
		if (str[len - 1] == value)
		{
			return (&str[len - 1]);
		}
		len--;
	}
	return (NULL);
}
