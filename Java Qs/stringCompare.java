import java.util.*;
public class stringCompare{
  public static void main(String[] args){
    String str1="Kamalika";
    String str2="Kamalik";
    boolean isCom=false;
     if(str1.length()!=str2.length()) {
       System.out.println("Unequal length strings");
       return;
     }

    for(int i=0;i<str1.length();i++){
      if(str1.charAt(i)!=str2.charAt(i)){
        isCom=false;
        break;
      }
      isCom=true;
    }
    System.out.println("Both strings are equal "+isCom);
  }
}