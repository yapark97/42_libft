/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:56:05 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 18:51:34 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (src == 0 && dest == 0)
		return (dest);
	ptr_dst = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	if (dest <= src)
	{
		while (num--)
			*ptr_dst++ = *ptr_src++;
	}
	else
	{
		ptr_dst += num;
		ptr_src += num;
		while (num--)
			*--ptr_dst = *--ptr_src;
	}
	return (dest);
}
