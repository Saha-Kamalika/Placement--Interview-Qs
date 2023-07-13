#include <stdio.h>
#include <string.h>
int count(char *s) {
  int vowels = 0;
  for (int i = 0; i < strlen(s); i++)
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      vowels++;
  printf("\nNo of vowels is %d", vowels);

  printf("\nConverting to uppercase: ");
  for (int i = 0; i < strlen(s); i++)
    s[i] = s[i] - 32;
  printf("%s", s);
  int len = strlen(s);
  for (int i = 0; i < len / 2; i++) {
    char temp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = temp;
  }
  printf("\nAfter reversal : %s", s);
}
void main() {
  char s[] = "";
  printf("Enter the string: ");
  scanf("%s", s);
  count(s);
}