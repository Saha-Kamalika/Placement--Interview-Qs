#include <bits/stdc++.h>
using namespace std;
bool isPalin(string s){
    if(s.length()==1) return true;
    string temp=s;
    reverse(s.begin(),s.end());
    return (s==temp);
}
int main(){
    string s,s1,s2,s3;
    cin>>s;
    int len=s.length();
    for(int i=1;i<len-1;i++){
        s1=s.substr(0,i);
        if(isPalin(s1)){
            for(int j=1;j<len-i;j++)
            {
                s2=s.substr(i,j);
                s3=s.substr(i+j,len-i-j);
                if(isPalin(s2) && isPalin(s3)){
                    cout<<s1<<endl<<s2<<endl<<s3<<endl;
                    exit(0);
                }
            }
        }
    }
    cout<<"Impossible"<<endl;
}
