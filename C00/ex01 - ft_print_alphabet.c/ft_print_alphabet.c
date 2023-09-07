#include <unistd.h>

void ft_print_alphabet() {
  char lettreA = 'a';

  while (lettreA <= 'z') {
    putchar(lettreA);
    lettreA++;
  }
}

int main() {
  ft_print_alphabet();
  return 0;
}