#include <stdio.h>
int main() {
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter array elements: \n");
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
  int mid = n / 2;
  printf("%d", mid);
  printf("The hybrid array is: ");
  for (int i = 0; i < mid; i++)
    printf("%d ", a[i]);
  for (int i = n - 1; i >= mid; i--)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}