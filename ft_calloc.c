/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:13:41 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/28 13:27:21 by haroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;
	size_t	max;

	i = 0;
	max = nmemb * size;
	if (!max)
		return (NULL);
	tab = malloc(max);
	while (max--)
		tab[i++] = 0;
	return (tab);
}
