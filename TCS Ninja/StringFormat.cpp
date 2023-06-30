// print the original string if length<=10 and print a new string s[0]+length-2+s[last_index]
#include <iostream>
using namespace std;

string func(string s){
    if(s.length()<=10) return s;
    else{
        int len=s.length();
        char c=s[0];
        char d=s[len-1];
        int nl=len-2;
        string ns=to_string(nl);
        string nss=c+ns+d;
        return nss;
    }
}
int main(){
    string s;
    cout<<"enter: ";
    cin>>s;
    string ans=func(s);
    cout<<ans;
    return 0;
}
