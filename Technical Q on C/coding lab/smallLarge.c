#include <stdio.h>
int main() {
  int n;
  printf("Enter the array size: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the array elements: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  int a1[n];
  int i = 0, j = n - 1;
  for (int k = 0; k < n; k += 2) {
    a1[k] = a[i];
    a1[k + 1] = a[j];
    i++;
    j--;
  }
  printf("The array is: ");
  for (int i = 0; i < n; i++)
    printf("%d ", a1[i]);
  printf("\n");
  return 0;
}