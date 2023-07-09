#include <stdio.h>
int putFibo(int a[], int i) {
  if (i == 0 || i == 2)
    return 1;
  else
    return putFibo(a, i - 2) + putFibo(a, i - 4);
}
static int low = 2;
int putPrime(int a[], int i) {
  int start = low, flag = 0;
  for (int i = 2; i <= start / 2; i++) {
    if (start % i == 0) {
      low++;
      start++;
    }
  }
  if (flag == 0) {
    low++;
    return start;
  }
}
int main() {
  int n, start = 2;
  printf("Enter the n(th) number: ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      a[i] = putFibo(a, i);
    else
      a[i] = putPrime(a, i);
  }
  printf("The series is: ");
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
  printf("The %dth term of the series is: %d", n, a[n - 1]);
}
#include <stdio.h>
int putFibo(int a[],int i){
  if (i == 0 || i == 2)
    return 1;
  else
    return putFibo(a, i - 2) + putFibo(a, i - 2);
}
int putPrime(int a[], int i) {
  int start = 2, flag = 0;
  for (int i = 2; i <= start / 2; i++) {
    if (start % 2 == 0) {
      flag = 1;
      break;
    }
  }
  start++;
  if (flag == 0)
    return start;
}
int main() {
  int n;
  printf("Enter the n(th) number: ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      a[i] = putFibo(a, i);
    else
      a[i] = putPrime(i / 2);
  }
  printf("The series is: ");
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
  printf("The %dth term of the series is: %d", n, a[n - 1]);
}