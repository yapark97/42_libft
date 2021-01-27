/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:57:10 by yapark            #+#    #+#             */
/*   Updated: 2020/04/04 21:57:46 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned int	i;
	unsigned int	size;
	char			*temp;

	size = (unsigned int)num;
	temp = (char*)ptr;
	i = 0;
	while (i < size)
	{
		temp[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
