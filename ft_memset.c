/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:24:27 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/31 13:48:57 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	value;
	char			*str;
	size_t			i;

	value = (char)c;
	str = (char*)b;
	i = 0;
	if (*str == '\0')
		return (0);
	while (i < len)
	{
		*str = value;
		i++;
		str++;
	}
	return (b);
}
