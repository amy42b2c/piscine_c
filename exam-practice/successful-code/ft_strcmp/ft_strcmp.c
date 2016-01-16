/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 10:49:03 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 11:11:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (1);
		else if (s2[i] < s1[i])
			return (1);
		else if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	else
		return (0);
}