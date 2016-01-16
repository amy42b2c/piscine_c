/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 18:55:27 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 18:44:33 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_next(char *b, char *s)
{
	while ((*b != '\0') || (*s != '\0'))
	{
		if (*b == *s)
		{
			b++;
			s++;
		}
		else
			break ;
	}
	if (*s == '\0')
		return (0);
	else
		return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		found;
	char	*c;
	char	*d;

	c = str;
	d = to_find;
	if (str == 0)
		return (0);
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			found = (find_next(str, to_find));
			{
				if (found == 0)
					return (str);
			}
		}
		str++;
	}
	return (0);
}