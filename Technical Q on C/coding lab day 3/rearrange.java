import java.util.*;
class rearrange{
  public static void modify(int a[]){
    List<Integer> l=new ArrayList<Integer>();
    for(int ele: a)
      l.add(ele);

    for(int i=0;i<l.size();i++){
      if(l.contains(i)) System.out.print(i+" ");
      else System.out.print(-1+" ");
    }
    System.out.println();
  }
  public static void main(String[] args){
    int a[]={19, 7, 0, 3, 18, 15, 12, 6, 1, 8, 11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    modify(a);
  }
}