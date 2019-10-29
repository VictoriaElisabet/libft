/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 10:22:41 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/29 12:18:37 by vgrankul         ###   ########.fr       */
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

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *ptr;

	new = (char*)malloc(sizeof(char) * ft_strlen((char*)s) + 1);
	ptr = new;
	if (new && s)
	{
		while (*s != '\0')
		{
			*new = f(*s);
			new++;
			s++;
		}
		*new = '\0';
		return (ptr);
	}
	return (NULL);
}
