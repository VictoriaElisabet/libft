/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:21:17 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/31 13:30:29 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	char	*ptr;
	int		i;

	i = 0;
	new = (char*)malloc(sizeof(char) * ft_strlen((char*)s) + 1);
	ptr = new;
	if (new && s)
	{
		while (*s != '\0')
		{
			*new = f(i, *s);
			new++;
			s++;
			i++;
		}
		*new = '\0';
		return (ptr);
	}
	return (NULL);
}
