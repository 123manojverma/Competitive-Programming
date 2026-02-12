import java.util.*;

public class unitarray{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] nums=new int[n];
            int neg=0,pos=0;
            for(int i=0;i<n;i++){
                nums[i]=sc.nextInt();
                if(nums[i]==-1)
                    neg++;
                else pos++;
            }
            int op=0;
            while(pos<neg || neg%2==1){
                op++;
                pos++;
                neg--;
            }
            System.out.println(op);
        }
    }
}