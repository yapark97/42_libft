/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:21:43 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 15:21:54 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int character)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == character)
			break ;
		i++;
	}
	if (str[i] == '\0' && character != '\0')
		return (0);
	return (&(str[i]));
}
