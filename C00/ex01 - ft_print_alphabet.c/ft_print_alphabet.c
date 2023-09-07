#include <unistd.h>

void ft_print_alphabet(void) {
    for (char lettreA = 'a'; lettreA <= 'z'; lettreA++) {
        write(1, &lettreA, 1);
    }
}

int main() {
    ft_print_alphabet();
    return 0;
}
