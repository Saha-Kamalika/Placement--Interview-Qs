import java.util.*;
class SumComAlpha{
  public static int getSum(int n){
    int sum=0;
    while(n!=0){
      int d=n%10;
      sum=sum+d;
      n/=10;
    }
    return sum;
  }
  public static int findSum(char input1[],char input2[]){
    List<Character> list1=new LinkedList<>();
      for(char ch: input1)
        list1.add(ch);

    List<Character> list2=new LinkedList<>();
      for(char ch: input2)
        list2.add(ch);

    list1.retainAll(list2);

    int sum=0;
    for(char ch: list1){
      sum+=ch;
    }
    int n=getSum(sum);
    if(n>10){
      n=getSum(n);
    }
    return n;
  }
  public static void main(String[] args){
    char input1[]={'a','b','c'};
    char input2[]={'b','c'};
    int ans=findSum(input1,input2);
    System.out.println(ans);
  }
}