/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:23:55 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/30 15:33:00 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		is_whitespace(char c)
{
	return (c == ' ' || c == ',' || c == '\n' || c == '\t');
}

int				ft_strlen(char *str)
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

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	while (is_whitespace(s[i]))
		i++;
	j = ft_strlen((char*)s);
	while (is_whitespace(s[j - 1]))
		j--;
	str = (char*)malloc(sizeof(char) * (j - i) + 1);
	if (str)
	{
		while (i < j)
		{
			str[k++] = (char)s[i++];
		}
		str[k] = '\0';
		return (str);
	}
	else
		return (NULL);
}
