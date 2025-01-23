/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abardhan <abardhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:12:55 by abardhan          #+#    #+#             */
/*   Updated: 2025/01/22 23:20:37 by abardhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char *strchr(const char *s, int c)
 {
	unsigned int i;

	while(s[i] != '\0')
	{
		if(s[i] == (unsigned char)c)
		{
			return(&s[i]);
		}
		i++;	
	}
	if(s[i] == (unsigned char)c)
	{
			return(&s[i]);
	}
	return(0);
 }