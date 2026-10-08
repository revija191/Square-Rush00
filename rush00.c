/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 11:48:36 by rlohitha          #+#    #+#             */
/*   Updated: 2026/09/20 12:32:12 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_rectangle(int x, int y, int c, int r);

void	rush(int x, int y)
{
	int	r;
	int	c;

	if (x <= 0 || y <= 0)
	{
		write (1, "Please specify valid positive numbers\n", 38);
		return ;
	}
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			ft_print_rectangle(x, y, c, r);
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}

void	ft_print_rectangle(int x, int y, int c, int r)
{
	if (r == 1 || r == y)
	{
		if (c == 1 || c == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (c == 1 || c == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}
