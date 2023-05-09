/*
Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per the following scheme.

-He first turns and travels 10 units of distance
-His second turn is upward for 20 units
-The third turn is to the left for 30 units
-The fourth turn is downward for 40 units
-The fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.
*/
#include<iostream>
using namespace std;
int main(){
  int n,x=0,y=0,distance=10;
  cin>>n;
  char c='R';
  while(n--){
    switch(c){
      case 'R': x+=distance;
                distance+=10;
                c='U';
                break;
      case 'U': y+=distance;
                distance+=10;
                c='L';
                break;
      case 'L': x-=distance;
                distance+=10;
                c='D';
                break;
      case 'D': y-=distance;
                distance+=10;
                c='K';  //right again
                break;
      case 'K': x+=distance;
                distance+=10;
                c='R';
                break;
    }
  }
  cout<<x<<" "<<y<<endl;
  return 0;
}