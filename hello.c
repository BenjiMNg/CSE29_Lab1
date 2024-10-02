#include <stdio.h>

int main() {
  char hello[] = "Hello!"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };
  char goodbye[] = "Goodbye!";

  puts(hello);
  puts(hello2);
  puts(goodbye);

  return 0;
}
