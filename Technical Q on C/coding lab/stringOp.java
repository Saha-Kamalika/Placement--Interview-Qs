import java.util.*;
public class stringOp{
  public static void modify(String str){
    LinkedList<Character> l=new LinkedList<Character>();
    for(int i=0;i<str.length();i++){
      if(str.charAt(i)>='a' && str.charAt(i)<='z' || str.charAt(i)>='A' && str.charAt(i)<='Z' || str.charAt(i)==' ')
        l.add(str.charAt(i));
    }
    System.out.println();
    for(char c: l)
      System.out.print(c);
    System.out.println();
    str="";
    for(char c: l){
        str=str+c;
    }
    String str1=str.toUpperCase();
    System.out.println(str1);
  String rev="";
  for(int i=str1.length()-1;i>=0;i--)
    rev=rev+str1.charAt(i);
  if(rev.equals(str1)) System.out.println("YES");
  else System.out.println("NO");
}
  public static void main(String[] args){
    String str="In.form,atio1n Tec?hnol-og=y";
    modify(str);
  }
}