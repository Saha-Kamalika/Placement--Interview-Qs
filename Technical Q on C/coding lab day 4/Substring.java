import java.util.*;
class Substring{
  public static List<String> palindromicString(String str,int k){
    List<String> l=new ArrayList<>();
    for(int i=0;i<=str.length()-k;i++){
      String palin=str.substring(i,i+k);
      if(isPalin(palin)) l.add(palin);
    }
    return l;
  }
  public static boolean isPalin(String palin){
    int i=0,j=palin.length()-1;
    while(i<j){
      if(palin.charAt(i)!=palin.charAt(j)){
        return false;
      }
      i++;
      j--;
    }
    return true;
  }
  public static void main(String[] args){
      String str="kamamamama";
      int k=3;
      List<String> ans=palindromicString(str,k);
      System.out.println(ans);
  }
}