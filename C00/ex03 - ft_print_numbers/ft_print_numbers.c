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