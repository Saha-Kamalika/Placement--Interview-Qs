#include <stdio.h>
char find(char *s) {
  int freq[256] = {0};
  for (int i = 0; s[i]; i++)
    freq[s[i]]++;
  int f = 0, se = 0;
  for (int i = 0; i < 256; i++) {
    if (freq[i] > freq[f]) {
      se = f;
      f = i;
    } else if (freq[i] > freq[se] && freq[i] != freq[f])
      se = i;
  }
  return se;
}
void main() {
  char s[] = "srijit";
  char c = find(s);
  printf("%c", c);
}