/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 18:29:05 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 11:52:18 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_next(char *found, char *small)
{
	while ((*small != '\0') || (*found != '\0'))
	{
		if (*found == *small)  /* is ptr of big == ptr of small? */
		{
			small++;
			found++;
		}
		else
			return (-1);  /* if haven't found all "small" letters. */
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*big;
	char	*small;
	int		found;

	big = str;
	small = to_find;
	if (*small == '\0')  /* if ptr of small is not at end of string... */
		return (big);  
	if (big < small)  /* if big is smaller than small, they will never match */
		return (0);
	while (*big != '\0')  /* while ptr big is not at end of string.. */
	{
		if (*big == *small)  /* if ptr of big == ptr of small... */
		{
			found = find_next(big, small); /* find next matching char */
			if (found == 0) /* if found char == 0, finished (return big) */
				return (big);
		}
		big++;     /* increment big to continue down string */ 
	}
	return (0); /* if *big not equal to *small, return nothing */
}

int		main()
{
	char	*str1;
	char	*str2;
	char	*p;

	str1 = "abcdehijcdam";
	str2 = "cde";
	p =	ft_strstr(str1, str2);
	printf("returned string: %s\n", p);
	return (0);
}