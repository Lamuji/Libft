/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:11:11 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/28 13:20:22 by haroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t i;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (s1[i] != '\0' && n-- >= len)
	{
		if (s1[i] == s2[i] && ft_strncmp(s1, s2, len) == 0)
			return ((char *)s1);
		i++;
	}
	return (NULL);
}
