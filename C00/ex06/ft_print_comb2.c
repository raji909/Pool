/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:12:49 by adraji            #+#    #+#             */
/*   Updated: 2025/07/16 14:30:33 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + '0');
			ft_putchar ((a % 10) + '0');
			ft_putchar (' ');
			ft_putchar ((b / 10) + '0');
			ft_putchar ((b % 10) + '0');
			if (!(a == 98 && b == 99))
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			b ++;
		}
		a ++;
	}
}
int main ()
{
	ft_print_comb2();
}
