/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 13:32:44 by bwebb             #+#    #+#             */
/*   Updated: 2019/01/20 12:16:06 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char in);

void	display(int o, int m, int x)
{
	ft_putchar(o);
	if (x >= 2)
	{
		while (x-- > 2)
			ft_putchar(m);
		ft_putchar(o);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (!(x < 1 || y < 1))
	{
		display('A', 'B', x);
		if (y >= 2)
		{
			while (y-- > 2)
				display('B', ' ', x);
			display('C', 'B', x);
		}
	}
}
