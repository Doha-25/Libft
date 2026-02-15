/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbani-ya <dbani-ya@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:45:51 by dbani-ya          #+#    #+#             */
/*   Updated: 2025/12/25 12:53:10 by dbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)s;
	while (len > 0)
	{
		*ptr = (char)c;
		ptr++;
		len--;
	}
	return (s);
}
