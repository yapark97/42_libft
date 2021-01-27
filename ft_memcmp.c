/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:54:09 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 17:33:48 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned int	i;
	unsigned int	size;
	unsigned char	*temp1;
	unsigned char	*temp2;

	size = (unsigned int)num;
	i = 0;
	temp1 = (unsigned char*)ptr1;
	temp2 = (unsigned char*)ptr2;
	while (i < size)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}
