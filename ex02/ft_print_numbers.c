/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:22:55 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/09 16:40:12 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_print_numbers(void)
{
	char c;
	
		c = '0';
		while ( c <= '9')

		{
			ft_putchar (c);
			c++;
		}
	}

		int main(void) {
			ft_print_numbers();
			return (0);

	}




