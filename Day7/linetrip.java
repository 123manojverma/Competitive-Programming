import java.util.Scanner;
public class linetrip{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int x=sc.nextInt();
            int[] nums=new int[n];
            for(int i=0;i<n;i++){
                nums[i]=sc.nextInt();
            }
            int max=Math.max(nums[0],(x-nums[n-1])*2);
            for(int i=1;i<n;i++){
                max=Math.max(nums[i]-nums[i-1],max);
            }
            System.out.println(max);
        }
    }
}