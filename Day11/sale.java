import java.util.*;

public class sale {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[] nums=new int[n];
        for(int i=0;i<n;i++){
            nums[i]=sc.nextInt();
        }
        Arrays.sort(nums);
        int maxp=0,p=0;
        for(int i=0;i<m;i++){
            p+=nums[i];
            maxp=Math.min(maxp,p);
        }
        System.out.println(-maxp);
    }
}
