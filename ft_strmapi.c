/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:26:05 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 18:32:03 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (!(ret = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return ((char*)0);
	i = -1;
	while (++i < ft_strlen(s))
		ret[i] = (*f)(i, s[i]);
	ret[i] = '\0';
	return (ret);
}
