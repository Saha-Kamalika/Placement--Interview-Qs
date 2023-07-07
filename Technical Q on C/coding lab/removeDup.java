import java.util.Set;
import java.util.LinkedHashSet;
class removeDup{
    public static void remove(String str){
  LinkedHashSet<Character> hs=new LinkedHashSet<Character>();
for(int i=0;i<str.length();i++)
  hs.add(str.charAt(i));

for(char c: hs)
  System.out.print(c);
System.out.println();
}
  public static void main(String[] args){
    String str="engineering";
    remove(str);
  }
}