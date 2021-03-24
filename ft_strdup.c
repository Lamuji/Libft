/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:22:13 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/24 12:03:29 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *src)
{
    int i;
    int len;
    char *dest;

    len = ft_strlen((char *)src);
    dest = malloc(sizeof(char) * len + 1);
    if(dest == NULL)
        return (0);
    i = 0; 
    while(i <= len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}