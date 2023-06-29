import java.util.*;
class stringDecoder{
  public static void main(String[] args){
    String str;
    Scanner sc=new Scanner(System.in);
    str=sc.next();
    System.out.println(stringDecoder(str));
  }
  public static String stringDecoder(String s){
    String res="";
    String word[]=s.split("0");
    for(int i=0;i<word.length;i++){
      int len=word[i].length();
      res+=(char)(64+len);
    }
    return res;
  }
}