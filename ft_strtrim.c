/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 15:28:28 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 19:36:02 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_start(char const *s1, char const *set, int op)
{
	int ret;
	int j;
	int check;

	ret = op == 1 ? 0 : ft_strlen(s1) - 1;
	while (ret > -1 && ret < (int)ft_strlen(s1))
	{
		j = -1;
		check = 0;
		while (set[++j] != '\0')
		{
			if (s1[ret] == set[j])
				check = 1;
		}
		if (check == 0)
			break ;
		ret = ret + op;
	}
	return (ret);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ret;

	start = find_start(s1, set, 1);
	end = find_start(s1, set, -1);
	if (start < end)
	{
		if (!(ret = (char*)malloc(sizeof(char) * (end - start + 2))))
			return ((char*)0);
		ft_strlcpy(ret, &(s1[start]), (end - start + 2));
		return (ret);
	}
	else
	{
		if (!(ret = (char*)malloc(1)))
			return ((char*)0);
		ret[0] = '\0';
		return (ret);
	}
	return (0);
}
