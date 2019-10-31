/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:58:56 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/31 13:56:29 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memarea;

	memarea = (void*)malloc(sizeof(void) * size);
	if (memarea)
	{
		ft_bzero(memarea, size);
		return (memarea);
	}
	else
		return (NULL);
}
