/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:28:02 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 15:28:14 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int character)
{
	int i;
	int ret;

	i = 0;
	ret = -1;
	while (str[i] != '\0')
	{
		if (str[i] == character)
			ret = i;
		i++;
	}
	if (character == '\0')
		return (&(str[i]));
	if (ret == -1 && character != '\0')
		return (0);
	return (&(str[ret]));
}
