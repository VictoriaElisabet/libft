/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:49:19 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/31 16:49:34 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int res;
	int i;
	int negative;

	i = 0;
	res = 0;
	negative = 1;
	str = ft_strtrim(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] > '0')
	{
		if (str[i] == ' ')
			return (res);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * negative);
}
