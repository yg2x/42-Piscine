#include <unistd.h>

void ft_print_comb2(void) {
    int n1, n2;

    n1 = 0;
    while (n1 <= 98) {
        n2 = n1 + 1;
        while (n2 <= 99) {
            char c1_1 = '0' + n1 / 10;
            char c1_2 = '0' + n1 % 10;
            char c2_1 = '0' + n2 / 10;
            char c2_2 = '0' + n2 % 10;

            write(1, &c1_1, 1);
            write(1, &c1_2, 1);
            write(1, " ", 1);
            write(1, &c2_1, 1);
            write(1, &c2_2, 1);

            if (!(n1 == 98 && n2 == 99)) {
                write(1, ", ", 2);
            }

            n2++;
        }
        n1++;
    }
}

int main() {
    ft_print_comb2();
    return 0;
}
