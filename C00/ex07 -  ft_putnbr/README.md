Ce code implémente une fonction ft_putnbr qui affiche un nombre passé en paramètre, y compris les nombres négatifs, en utilisant la récursion pour afficher les chiffres un par un. La fonction main appelle cette fonction avec un exemple (42) pour afficher le nombre.

```c
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
        ft_putnbr(nb / 10);
    }

    ft_putchar('0' + (nb % 10));
}

int main() {
    ft_putnbr(42);
    return 0;
}
```
