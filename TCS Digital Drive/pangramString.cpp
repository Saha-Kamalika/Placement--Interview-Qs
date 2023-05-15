/*
Check whether a string in pangram or not
//a pangram string is a string that contains all alphabets from a to z
*/
#include<iostream>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  int i;
  for(i=0;i<s.length();i++){
    if(s[i]>='A' && s[i]<='Z')
      s[i]+=32;  //all to lowercase
  }

  int freq[26]={0},x;
  for(i=0;i<s.length();i++){
    x=s[i]-'a';
    freq[x]++;
  }
  for(i=0;i<26;i++){
    if(freq[i]==0){
      cout<<"Not a pangram string"<<endl;
      return 0;
    }
  }
  cout<<"Pangram string"<<endl;
  return 0;
  
}