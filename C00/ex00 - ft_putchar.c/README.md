Cette fonction ft_putchar est utilisée pour afficher un caractère spécifique sur la sortie standard en utilisant la fonction système write. Vous pouvez l'utiliser pour afficher un seul caractère à la fois en appelant cette fonction avec le caractère que vous souhaitez afficher en tant qu'argument.

```c
#include <unistd.h>

void ft_putchar(char c) {
  write(1, & c, 1);
}
```
