import java.util.*;
class Uncommom{
  public static List<Integer> findUncommon(int a[],int b[]){
    
    Set<Integer> set1 = new HashSet<>();
    Set<Integer> set2 = new HashSet<>();
        for (Integer ele : a)
            set1.add(ele);
        for (Integer ele : b)
            set2.add(ele);

        List<Integer> uncommonElements = new ArrayList<>();
        for (Integer ele : a) {
            if (!set2.contains(ele)) {
                uncommonElements.add(ele);
            }
        }
        for (Integer ele : b) {
            if (!set1.contains(ele)) {
                uncommonElements.add(ele);
            }
        }
        Collections.sort(uncommonElements);
        return uncommonElements;
    }
  public static void main(String[] args){
    int a[]={1,3,4,5,7};
    int b[]={2,3,5,6};
    List<Integer> res=findUncommon(a,b);
    System.out.println(res);
  }
}