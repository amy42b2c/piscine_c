/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_recursive_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 13:56:24 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 19:23:38 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int nb;

	nb = ft_recursive_factorial(6);
	printf("The result is %d.\n", nb);
	return (0);
}