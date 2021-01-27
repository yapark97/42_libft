/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:16:40 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 19:35:05 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	loop(int op, int n, int fd)
{
	char c;

	if (n > 9 || n < -9)
		loop(op, n / 10, fd);
	c = (n % 10) * op + '0';
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	int op;

	op = n >= 0 ? 1 : -1;
	if (op == -1)
		write(fd, "-", 1);
	loop(op, n, fd);
}
