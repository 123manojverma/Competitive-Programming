import java.util.Arrays;
import java.util.Scanner;

public class heapify {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] nums=new int[n];
            for(int i=0;i<n;i++){
                nums[i]=sc.nextInt();
            }
            if(n%2==0){
                System.out.println("YES");
            }else{
                int m=n/2;
                int val=nums[m];
                Arrays.sort(nums);
                if(val==nums[m]){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }
        }
    }    
}
