/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:51:27 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 16:58:33 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	unsigned int	i;
	unsigned int	size;
	unsigned char	*temp;
	unsigned char	*temp2;

	size = (unsigned int)num;
	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	temp = (unsigned char*)dest;
	temp2 = (unsigned char*)src;
	while (i < size)
	{
		temp[i] = temp2[i];
		if (temp[i] == (unsigned char)c)
			return (&(temp[i + 1]));
		i++;
	}
	return (0);
}
