
import java.util.*;
public class wordLen {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the string: ");
    String str = sc.nextLine();
    str=str.concat(" ");
    int ini=0,i;
    String s;
    for (i = 0; i < str.length(); i++) {
      if(str.charAt(i)==' '){
        s=str.substring(ini,i);
        ini=i;
        System.out.println(s.trim()+"->"+(s.trim()).length());
      }
    }
  }
}
