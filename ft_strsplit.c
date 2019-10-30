/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:39:39 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/30 17:01:31 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strlen(char *str)
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

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int count;
	char **arr;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{	
		j = 0;
		if (s[i] == c && s[i + 1] != c)
			i++;
	}
	printf("%d", count);
	arr = (char**)malloc(sizeof(char*) * i + 1);
	i = 0;
	while (s[i] != '\0')
	{
		*arr = (char*)malloc((sizeof(char) * j) + 1);
		j = 0;
		while (*s != c)
		{
			arr[i][j] = (char)s[j];
			j++;
		}
		arr[i][j] = '\0';
		i++;
	}
	printf("%d", i);
	arr[i] = 0;
	return(arr);
}
int	main(void)
{
	char *str = "*hello*test*mest*";
	char **arr;
	arr = ft_strsplit(str, '*');
//	int i = 0;
//	while (*arr[i] != 0)
//	{
//		ft_putstr(*arr);
//		i++;
//	}


}
