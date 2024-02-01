/*you are given the scores of a football league among a set of teams you need to find the winner of the league and print the name of winner and points earned by the team which team gets three points for a win 1.48 draw and zero for a lost the name of the teams is represented as uppercase character*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int teams;
    cin>>teams;
    string str;//a newline string input
    getline(cin,str);
    int scores[teams]={0};
    for(int i=0;i<(teams*(teams-1))/2;i++){
        string matchinfo;
        getline(cin,matchinfo);
        
        char home=matchinfo[0];
        char away=matchinfo[2];
        
        int j=4;
        string homescore="";
        string awayscore="";
        while(matchinfo[j]!='-'){
            homescore+=matchinfo[j];
            j++;
        }
        int x=stoi(homescore);
        j++;
        while(j<matchinfo.length()){
            awayscore+=matchinfo[j];
            j++;
        }
        int y=stoi(awayscore);
        
        if(x<y){
            scores[away-'A']+=3;
        }
        else if(x==y){
            scores[home-'A']+=1;
            scores[away-'A']+=1;
        }
        else scores[home-'A']+=3;
    }
    int index=-1;
    int maxx=INT_MIN;
    for(int i=0;i<teams;i++){
        if(scores[i]>maxx){
            maxx=scores[i];
            index=i;
        }
    }
    cout<<char(index+'A')<<" "<<scores[index]<<endl;
    return 0;
}
