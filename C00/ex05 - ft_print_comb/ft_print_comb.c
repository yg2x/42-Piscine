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