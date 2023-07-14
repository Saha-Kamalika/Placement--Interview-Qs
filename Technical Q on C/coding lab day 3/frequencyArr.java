import java.util.*;
class frequencyArr{
  public static void frequency(int a[],int n){
    LinkedHashMap<Integer,Integer> map=new LinkedHashMap<>();
    for(int i=0;i<n;i++){
      if(map.containsKey(a[i])) map.put(a[i],map.get(a[i])+1);
      else map.put(a[i],1);
    }
    for(Map.Entry<Integer,Integer> entry: map.entrySet()){
      System.out.print(entry.getKey());
      System.out.print(entry.getValue()-1);
    }
    System.out.println();
  }
  public static void main(String[] args){
      String num="5552229333344";
      int count=0;
      char[] s=num.toCharArray();
      for(char c:s)
        count++;
      int[] a=new int[count];
      for(int i=0;i<count;i++)
        a[i]=num.charAt(i)-'0';
        frequency(a,count);
   }
}