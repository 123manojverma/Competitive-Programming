import java.util.Scanner;

public class Desorting {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            long[] nums=new long[n];
            for(int i=0;i<n;i++){
                nums[i]=sc.nextLong();
            }
            boolean unsorted=false;
            long diff=Long.MAX_VALUE;
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    unsorted=true;
                    break;
                }
                diff=Math.min(diff,nums[i+1]-nums[i]);
            }
            if(unsorted){
                System.out.println(0);
                continue;
            }
            System.out.println((diff/2)+1);
        }
    }
}
