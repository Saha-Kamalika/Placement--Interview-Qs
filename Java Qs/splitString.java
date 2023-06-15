/*
strings can be split by 5 methods-
-using string class split method
-Pattern.complie(regex).splitAsStream(string)
-String tokenizer
-StringUtils.split(string,"exp")
-Splitter.on(exp).split(string)
*/

import java.util.*;
import java.util.regex.Pattern;
import java.util.stream.Collectors;

public class splitString {
  public static void main(String[] args) {
    //1 using split method
    String s = "091-7980169813";
    String[] str = s.split("-");
    print(str, "String Split Method");
    
    //2 using pattern class
    List<String> strs = Pattern.compile("-").splitAsStream(s).collect(Collectors.toList());
    System.out.println("Splitting by Pattern Class");
    for (String sk : strs)
      System.out.println(sk);
    
    //3 using tokenizer
    StringTokenizer st1=new StringTokenizer(s,"-");
    while(st1.hasMoreTokens()){
      String s2=st1.nextToken();
      System.out.println(s2);
    }

    //4 using StringUtils class
    String spli[]=StringUtils.split(s,"-");
    print(spli,"StringUtils Method");

    //5 Guava Splitter
    Iterable<String> ss=Splitter.on("-").split(s);
    for(String g:ss){
      System.out.println(g);
    }
  }

  public static void print(String s[], String app) {
    System.out.println("Splitting by " + app);
    for (String st : s)
      System.out.println(st);
  }
}