/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:19:21 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/12/01 15:42:56 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	if (*str1 == *str2 && *str1 == '\0')
		return ((char *)str1);
	while (*str1)
	{
		if (ft_memcmp(str1, str2, ft_strlen(str2)) == 0)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
