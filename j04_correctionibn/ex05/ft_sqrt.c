/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 17:01:27 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 09:01:05 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;
	int	sq;

	guess = 0;
	while (1)
	{
		sq = guess * guess;
		if (sq == nb)
			return (guess);
		if (sq > nb / 2)
			return (0);
		guess++;
	}
	return (0);
}