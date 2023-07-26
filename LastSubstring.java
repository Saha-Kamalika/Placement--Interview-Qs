import java.util.SortedSet;
import java.util.TreeSet;
class LastSubstring{
  public static String find(String str){
    TreeSet<String> t=new TreeSet<>();
    String s;
    for(int i=0;i<str.length();i++){
      s="";
      for(int j=i;j<str.length();j++){
        s=s+str.charAt(j);
        t.add(s);
      }
    }
    return t.last();
  }
  public static void main(String[] args){
    String str="abdc";
    String res=find(str);
    System.out.println(res);
  }
}