#include <stdio.h>
void main() {
  int n1, n2, ch;
  printf("Enter the 2 numbers: ");
  scanf("%d%d", &n1, &n2);
  while (1) {
    printf("1. additon 2. subtrcation 3. multiplication 4. division 5. modulus "
           "6. exit");
    printf("\nChoose: ");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      printf("Additon: %d\n", (n1 + n2));
      break;
    case 2:
      printf("Subtraction: %d\n", (n1 - n2));
      break;
    case 3:
      printf("Multiplication: %d\n", (n1 * n2));
      break;
    case 4:
      printf("Division: %d\n", (n1 / n2));
      break;
    case 5:
      printf("Remainder: %d\n", (n1 % n2));
      break;
    case 6:
      printf("Exiting...\n");
      exit(0);
    }
  }
}