#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    char lettreZ = 'z';

    while (lettreZ >= 'a') {
        write(1, &lettreZ, 1);
        lettreZ--;
    }
}

int main() {
    ft_print_reverse_alphabet();
    return 0;
}
