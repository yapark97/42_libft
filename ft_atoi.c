/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:06:59 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 18:50:15 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int				i;
	int				op;
	long long int	ret;

	i = 0;
	op = 1;
	ret = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			op = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ret > 2147483647 && op == 1)
			return (-1);
		if (ret > 2147483648 && op == -1)
			return (0);
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(ret * op));
}
