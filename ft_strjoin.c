/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:23:15 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 18:28:18 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				size;
	unsigned int	i;
	char			*ret;

	size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	if (!(ret = (char*)malloc(sizeof(char) * (size + 1))))
		return ((char*)0);
	while (i < ft_strlen(s1))
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		ret[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	ret[size] = '\0';
	return (ret);
}
