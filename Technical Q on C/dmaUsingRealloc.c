#include <stdio.h>
#include <stdlib.h>
int main() {
  int *marks;
  static int n;
  static int n1;
  printf("Enter the number of subjects: ");
  scanf("%d", &n);
  marks = (int *)malloc(n * sizeof(int));
  if (marks == NULL) {
    printf("Memory not allocated\n");
    exit(0);
  } else {
    printf("Memory successfully allocated\n");
    printf("Memory addresses: \n");
    for (int i = 0; i < n; i++)
      printf("%p\n", &marks[i]);
    printf("\n");
    printf("Enter the marks of %d subjects: ", n);
    for (int i = 0; i < n; i++)
      scanf("%d", &marks[i]);
    char ch;
    while (1) {
      printf("Want to insert any other marks?: ");
      scanf("%c", &ch);
      switch (ch) {
      case 'Y':
        printf("Total numner of subjects after adding: ");
        scanf("%d", &n1);
        marks = realloc(marks, n1 * sizeof(int));
        if (marks == NULL) {
          printf("Realloc memory not allocated\n");
        } else {
          printf("Memory addresses: \n");
          for (int i = n; i < n1; i++)
            printf("%p\n", &marks[i]);
          printf("\n");
          printf("Enter the extra marks: ");
          for (int i = n; i < n1; i++)
            scanf("%d", &marks[i]);
          printf("\n");
          break;
        }
      case 'N':
        if (n1 == 0)
          n = n;
        else
          n = n1;
        printf("Count        Marks         Addresses\n");
        for (int i = 0; i < n; i++)
          printf("%d         %d         %p\n", i + 1, marks[i], &marks[i]);
        break;
      case 'E':
        printf("Exitting....");
        exit(0);
      }
    }
  }
}
