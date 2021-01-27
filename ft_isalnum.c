/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:28:31 by yapark            #+#    #+#             */
/*   Updated: 2020/04/04 21:28:49 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if (argument >= 'a' && argument <= 'z')
		return (1);
	if (argument >= 'A' && argument <= 'Z')
		return (1);
	if (argument >= '0' && argument <= '9')
		return (1);
	return (0);
}
