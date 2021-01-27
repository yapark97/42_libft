/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:53:21 by yapark            #+#    #+#             */
/*   Updated: 2020/04/13 17:31:24 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char*)ptr;
	while (i < num)
	{
		if (temp[i] == (unsigned char)value)
			return ((void*)(temp + i));
		i++;
	}
	return (NULL);
}
