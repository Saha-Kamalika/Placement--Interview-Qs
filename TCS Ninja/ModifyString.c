/*
-words will be read at a time, in 3 separate lines
-replace all vowels in 1st word by %
-replace all consonants in 2nd word by #
-convert the 3rd word to uppercase
-concatenate the 3 words and print them
*/

#include<stdio.h>
#include<string.h>
int main(){
  char a[20],b[20],c[20];
  int x=0,y=0,z=0;

  gets(a);
  gets(b);
  gets(c);
  
  //1st case
  while(a[x]!='\0'){
    if(a[x]=='a' || a[x]=='e' || a[x]=='i' || a[x]== 'o' || a[x]=='u')
      a[x]='%';
    x++;
  }

  //2nd case
  while(b[y]!='\0'){
    if(b[y]!='a' && b[y]!='e' && b[y]!='i' && b[y]!= 'o' && b[y]!='u')
      b[y]='#';
    y++;
  }

  //3rd case
  while(c[z]!='\0'){
    if(c[z]>='a' && c[z]<='z')
      c[z]-=32;
    z++;
  }
  strcat(a,b);
  strcat(a,c);
  puts(a);
  return 0;
}