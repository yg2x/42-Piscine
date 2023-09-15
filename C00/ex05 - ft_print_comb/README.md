Ce code génère et affiche toutes les combinaisons de trois chiffres différents de 0 à 9, dans l'ordre croissant, séparées par des virgules et de l'espace. Il exclut les combinaisons avec des chiffres répétés et évite d'ajouter une virgule supplémentaire à la fin.

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:31:23 by ruda-sil          #+#    #+#             */
/*   Updated: 2023/09/15 10:34:38 by ruda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void) {
    char c1, c2, c3;

    c1 = '0';
    while (c1 <= '7') {
        c2 = c1 + 1;
        while (c2 <= '8') {
            c3 = c2 + 1;
            while (c3 <= '9') {
                write(1, &c1, 1);
                write(1, &c2, 1);
                write(1, &c3, 1);
                if (c1 != '7' || c2 != '8' || c3 != '9') {
                    write(1, ", ", 2);
                }
                c3++;
            }
            c2++;
        }
        c1++;
    }
}

int main() {
    ft_print_comb();
    return 0;
}
```
