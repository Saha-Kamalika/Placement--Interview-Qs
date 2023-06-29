import java.util.*;
class Rotate{
    public static void leftrot(int a[],int n,int r){
        int first,j;
        for(int i=0;i<r;i++){
            first=a[0];
            for(j=0;j<n-1;j++){
                a[j]=a[j+1];
            }
            a[j]=first;
        }
    }
    public static void main(String[] args){
        int n,r;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        r=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        leftrot(a,n,r);
        for(int i=0;i<n;i++){
           System.out.print(a[i]+" ");
        }
        System.out.println();
    }
}
