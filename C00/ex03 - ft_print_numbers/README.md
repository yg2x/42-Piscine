Comme l'exercice ex02, mais à la place de l'alphabet c'est avec les nombres de 0 a 9 dans l’ordre croissant

```c
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
```
