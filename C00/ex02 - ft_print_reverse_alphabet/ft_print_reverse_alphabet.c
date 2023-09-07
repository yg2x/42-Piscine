#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    for (char lettreZ = 'z'; lettreZ >= 'a'; lettreZ--) {
        write(1, &lettreZ, 1);
    }
}

int main() {
    ft_print_reverse_alphabet();
    return 0;
}