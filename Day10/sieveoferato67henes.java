
import java.util.Scanner;

public class sieveoferato67henes {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] nums=new int[n];
            boolean possible=false;
            for(int i=0;i<n;i++){
                nums[i]=sc.nextInt();
                if(nums[i]==67){
                    possible=true;
                }
            }
            if(possible){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
