/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:55:00 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 16:41:38 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned int	i;
	unsigned int	size;
	unsigned char	*temp;
	unsigned char	*temp2;

	size = (unsigned int)num;
	if (src == 0 && dest == 0)
		return (dest);
	temp = (unsigned char*)dest;
	temp2 = (unsigned char*)src;
	i = -1;
	while (++i < size)
		temp[i] = temp2[i];
	return (dest);
}
