/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:14:35 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/05 12:31:32 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*res;

	if (!dest && !src)
		return (NULL);
	res = dest;
	while (*(src))
		*(dest++) = *(src++);
	*dest = '\0';
	return (res);
}
