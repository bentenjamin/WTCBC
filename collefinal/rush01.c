/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 13:32:44 by bwebb             #+#    #+#             */
/*   Updated: 2019/01/20 12:40:40 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char in);

void	display(int r, int l, int m, int x)
{
	ft_putchar(l);
	if (x >= 2)
	{
		while (x-- > 2)
			ft_putchar(m);
		ft_putchar(r);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (!(x < 1 || y < 1))
	{
		display('\\', '/', '*', x);
		if (y >= 2)
		{
			while (y-- > 2)
				display('*', '*', ' ', x);
			display('/', '\\', '*', x);
		}
	}
}
