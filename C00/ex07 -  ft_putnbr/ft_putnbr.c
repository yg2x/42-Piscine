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