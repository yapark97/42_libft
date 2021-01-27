/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:27:32 by yapark            #+#    #+#             */
/*   Updated: 2020/04/16 12:39:56 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	int		check;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (*s2 == 0)
		return ((char*)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		check = 1;
		while (s1[i + j] != '\0' && s2[j] != '\0')
		{
			if (i + j >= n || s1[i + j] != s2[j])
				check = 0;
			j++;
		}
		if (check && s2[j] == '\0')
			return ((char*)&(s1[i]));
		i++;
	}
	return (NULL);
}
