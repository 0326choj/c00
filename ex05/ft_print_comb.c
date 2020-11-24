/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejung <ejung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:09:41 by ejung             #+#    #+#             */
/*   Updated: 2020/11/24 07:41:41 by ejung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_p(char c, char d);

void	ft_print_comb(void)
{
	int		i;
	int		j;
	char	a;
	char	b;

	i = 0;
	while (i <= 6)
	{
		j = i + 1;
		while (j <= 8)
		{
			a = i + '0';
			b = j + '0';
			ft_p(a, b);
			j++;
		}
		i++;
	}
	write(1, "789", 3);
}

void	ft_p(char c, char d)
{
	char	e;

	e = d + 1;
	while (e <= '9')
	{
		if (d < e)
		{
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, &e, 1);
			write(1, ",", 1);
			write(1, " ", 1);
		}
		++e;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
