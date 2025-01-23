/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:29:31 by abardhan          #+#    #+#             */
/*   Updated: 2025/01/22 16:11:13 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	
	while((s1[i] || s2[i]) && (i < n))
	{
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return(0);
}