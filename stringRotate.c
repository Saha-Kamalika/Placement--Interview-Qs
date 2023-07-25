#include <stdio.h>
#include <string.h>
char *rotate(char *s, int k) {
  int len = strlen(s);
  char end;
  if (len < k)
    return s;
  else {
    for (int i = 0; i < k; i++) {
      end = s[len - 1];
      for (int j = len - 1; j >= 0; j--)
        s[j] = s[j - 1];
      s[0] = end;
    }
  }
  return s;
}
void main() {
  char s[20] = "Hello5678";
  int k = 4;
  char *ans = rotate(s, k);
  printf("%s", ans);
}