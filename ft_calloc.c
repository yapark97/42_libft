/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:27:21 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 18:50:37 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elt_count, size_t elt_size)
{
	size_t	i;
	char	*ret;

	if (!(ret = malloc(elt_size * elt_count)))
		return ((void*)0);
	i = -1;
	while (++i < elt_size * elt_count)
		ret[i] = 0;
	return (ret);
}
