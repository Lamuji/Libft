/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:08:58 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/26 10:09:00 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *a;
    char *b;
    
    i = 0;
    a = (char *)s1;
    b = (char *)s2;
    
    while(a[i] == b[i] && i < n)
        i++;
    return(i);
}