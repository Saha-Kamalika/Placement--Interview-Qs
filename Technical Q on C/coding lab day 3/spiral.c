#define row 4
#define col 4
#include <stdio.h>

void sp(int a[row][col], int r, int c) {
  int k = 0, l = 0;
  while (k < r && l < c) {
    for (int i = l; i < c; i++)
      printf("%d ", a[k][i]); // printing the 1st row from rem rows
    k++;

    for (int i = k; i < r; i++)
      printf("%d ", a[i][c - 1]); // printing the last column from rem cols
    c--;

    if (k < r) {
      for (int i = c - 1; i >= l; i--)
        printf("%d ", a[r - 1][i]); // printing the last row from rem rows
      r--;
    }
    if (l < c) {
      for (int i = r - 1; i >= k; i--)
        printf("%d ", a[i][l]); // printing the 1st column from rem cols
      l++;
    }
  }
}
void main() {
  int a[row][col] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  sp(a, row, col);
}