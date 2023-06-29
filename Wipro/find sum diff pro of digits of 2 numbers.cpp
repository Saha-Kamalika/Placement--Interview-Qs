// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;
void find(string n1,string n2){
    string add="",sub="",mul="";
    int t1,t2,t3;
    for(int i=0;i<n1.length();i++){
        t1=(n1[i]-48)+(n2[i]-48);
        //cout<<t1<<endl;
        t2=abs((n1[i]-48)-(n2[i]-48));
        //cout<<t2<<endl;
        t3=(n1[i]-48)*(n2[i]-48);
        //cout<<t3<<endl;
        add=add+to_string(t1);
        sub=sub+to_string(t2);
        mul=mul+to_string(t3);
    }
    cout<<add<<" "<<sub<<" "<<mul<<endl;
}
int main() {
    string n1,n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    find(n1,n2);
    return 0;
}
