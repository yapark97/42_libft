/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:25:40 by yapark            #+#    #+#             */
/*   Updated: 2020/04/04 21:27:07 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned int	i;
	unsigned int	size;
	char			*temp;

	size = (unsigned int)num;
	temp = (char*)ptr;
	i = 0;
	while (i < size)
	{
		temp[i] = 0;
		i++;
	}
}
