/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:31:23 by ruda-sil          #+#    #+#             */
/*   Updated: 2023/09/15 10:34:38 by ruda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchar('-');
		nb = -nb;
	}

	if (nb >= 10) {
		ft_putchar(nb / 10);
	}

	ft_putchar('0' + (nb % 10));
}

int main() {
	ft_putchar(42);
	return 0
}
