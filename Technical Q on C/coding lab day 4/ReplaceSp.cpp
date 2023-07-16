#include<iostream>
using namespace std;
void replaceSp(string str)
{
    string rep = "%20";
    for(int i=0 ; i<str.length() ; i++)
      if(str[i] == ' ') str.replace(i,1,rep);
    cout<<str;
}
int main()
{
    string str = "Java is Great";
    replaceSp(str);
    return 0;
}