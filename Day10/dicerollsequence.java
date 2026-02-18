import java.util.Scanner;

public class dicerollsequence {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] nums=new int[n];
            for(int i=0;i<n;i++){
                nums[i]=sc.nextInt();
            }
            int op=0;
            for(int i=0;i<n-1;i++){
                if(nums[i+1]==7-nums[i] || nums[i]==nums[i+1]){
                    op++;
                }
            }
            System.out.println(op);
        }
    }
}
