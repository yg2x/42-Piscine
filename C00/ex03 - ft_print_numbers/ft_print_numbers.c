/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:31:23 by ruda-sil          #+#    #+#             */
/*   Updated: 2023/09/15 10:34:38 by ruda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void) {
    char chiffre = '0';

    while (chiffre <= '9') {
        write(1, &chiffre, 1);
        chiffre++;
    }
}

int main() {
    ft_print_numbers();
    return 0;
}
