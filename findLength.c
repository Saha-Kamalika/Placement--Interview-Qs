#include<stdio.h>
void main(){
  char s[20];
  printf("Enter the string: ");
  scanf("%s",s);
  int i;
  for(i=0;s[i]!='\0';i++);
  printf("Length of the string is %d",i);
}