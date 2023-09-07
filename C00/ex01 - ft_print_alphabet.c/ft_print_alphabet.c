#include <unistd.h>

void ft_print_alphabet(void) {
    char lettreA = 'a';

    while (lettreA <= 'z') {
        write(1, &lettreA, 1);
        lettreA++;
    }
}

int main() {
    ft_print_alphabet();
    return 0;
}
