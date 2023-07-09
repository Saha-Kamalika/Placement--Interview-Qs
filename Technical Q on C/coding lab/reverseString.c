#include <stdio.h>
void reverse(char *s) {
  if (*s != NULL) {
    reverse(s + 1);
    printf("%c", *s);
  }
}
int main() {
  char c[] = "kamalika saha";
  reverse(c);
  return 0;
}