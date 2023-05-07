#include<stdio.h>
void main(){
  char s1[20],s2[20];
  int i=0,j=0;
  printf("Enter string1: ");
  scanf("%s",s1);
  printf("Enter string2: ");
  scanf("%s",s2);
  while(s1[i]!='\0')
    i++;
  while(s2[j]!='\0'){
    s1[i]=s2[j];
    i++;
    j++;
  }
  s1[i]='\0';
  printf("The concatenated string is %s\n",s1);
}