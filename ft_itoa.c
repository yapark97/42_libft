/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 21:32:00 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 19:33:26 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_len(int n)
{
	int len;

	len = 1;
	if (n < 0)
		len++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		op;
	char	*ret;

	op = 1;
	if (n < 0)
		op = -1;
	len = find_len(n);
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return ((char*)0);
	ret[len--] = '\0';
	if (n < 0)
		ret[0] = '-';
	while ((len >= 0 && op > 0) || (len > 0 && op < 0))
	{
		ret[len] = (n % 10) * op + '0';
		n = n / 10;
		len--;
	}
	return (ret);
}
