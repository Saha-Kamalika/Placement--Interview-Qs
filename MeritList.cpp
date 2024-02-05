#include<bits/stdc++.h>
using namespace std;
int main(){
    //1 find no of merit list students after each evaluation
    int n;
    cin>>n;
    int m[n];
    for(int i=0;i<n;i++) cin>>m[i];
    int k;
    cin>>k;
    vector<int> ans;
    while(k--){
        int pos;
        cin>>pos;
        int marks;
        cin>>marks;
        m[pos-1]=marks;
        int count=0;
        for(int i=1;i<=n;i++){
                if(m[i-1]!=m[i]) count++;
            }
        cout<<"After evaluation merit list consists of "<<count<<" students"<<endl;
    }
    
    //2 to find the diff between the odd digit sum and even digit sum
    string num;
    cin>>num;
    int osum=0, esum=0;
    for(int i=0;i<num.length();i++){
        if(i%2==0) esum+=(num[i]-'0');
        else osum+=(num[i]-'0');
    }
    cout<<abs(osum-esum)<<endl;
}
