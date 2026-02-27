import java.util.*;

public class bomb{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int n=sc.nextInt();
            int[] nums=new int[n];
            for(int i=0;i<n;i++){
                nums[i]=sc.nextInt();
            }
            long time=1;
            if(b>a){
                b=a;
            }
            if(b>1){
                time=b;
            }
            b=1;
            for(int i=0;i<n;i++){
                if(b+nums[i]<a){
                    time+=nums[i];
                }else{
                    time+=a-1;
                }
            }
            System.out.println(time);
        }
    }
}