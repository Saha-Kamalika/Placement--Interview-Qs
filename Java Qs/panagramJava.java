import java.util.*;
class panagramJava{
  public static void main(String[] args){
    String s="The quick brown fox jumps over the lazy dog";
    System.out.println(panagram(s.toLowerCase()));
  }
  public static boolean panagram(String s){
    if(s.length()<26) return false;
    else{
      for(char ch='a';ch<='z';ch++){
        if(s.indexOf(ch)<0){
          return false;
        }
      }
    }
    return true;
  }
}
