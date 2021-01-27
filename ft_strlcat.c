/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:24:15 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 15:24:36 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		j;
	int		size_;
	size_t	dst_size;

	dst_size = size < ft_strlen(dest) ? size : ft_strlen(dest);
	i = 0;
	size_ = (int)size;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (i < size_ - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(src) + dst_size);
}
