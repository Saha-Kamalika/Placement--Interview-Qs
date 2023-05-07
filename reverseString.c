#include <stdio.h>
#include<string.h>
void main(){
  char s[20],temp;
  int i,len;
  printf("Enter the string: ");
  scanf("%s",s);
  len=strlen(s)-1;
  for(i=0;i<strlen(s)/2;i++){
    temp=s[i];
    s[i]=s[len];
    s[len--]=temp;
  }
  printf("Reverse string is %s",s);
  
}