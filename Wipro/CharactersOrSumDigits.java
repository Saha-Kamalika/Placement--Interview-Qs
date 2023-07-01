import java.util.*;
public class CharactersOrSumDigits {
    public static String findCharsOrDigitSum(String input1,int input2) {
        Integer sum=0;
        if(input1=="null" || input1.length()==0) return "NULL";
        else if(input2==0) {
            for(int i=0; i<input1.length(); i++) {
                if(input1.charAt(i)>='0' && input1.charAt(i)<='9')
                    sum+=input1.charAt(i)-48;
            }
            if(sum==0) return "ZERO";
            else {
                String s=sum.toString();
                return s;
            }
        } else if(input2==1) {
            String ns="";
            for(int i=0; i<input1.length(); i++) {
                if(input1.charAt(i)>='a' && input1.charAt(i)<='z' || input1.charAt(i)>='A' && input1.charAt(i)<='Z')
                    ns+=input1.charAt(i);
            }
            if(ns=="") return "ZERO";
            else return ns;
        }
        return "NULL";
    }
    public static void main(String[] args) {
        String i;
        int n;
        Scanner sc=new Scanner(System.in);
        i=sc.nextLine();
        n=sc.nextInt();
        String ans=findCharsOrDigitSum(i,n);
        System.out.println(ans);
    }
}