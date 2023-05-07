#include<stdio.h>
void main(){
  char s1[20],s2[20];
  int i;
  printf("Enter the string: ");
  scanf("%s",s1);
  for(i=0;s1[i]!='\0';i++)
    s2[i]=s1[i];
  s2[i]='\0';
  printf("The copied string is %s",s2);
}