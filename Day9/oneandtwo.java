
import java.util.Scanner;

public class oneandtwo {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            int b=0;
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
                if(a[i]==2)b++;
            }
            int c=0;
            boolean flag=false;
            for(int i=0;i<n-1;i++){
                if(a[i]==2){
                    c++;
                    b--;
                }
                if(c==b){
                    flag=true;
                    System.out.println(i+1);
                    break;
                }
            }
            if(!flag){
                System.out.println(-1);
            }
        }
    }
}
