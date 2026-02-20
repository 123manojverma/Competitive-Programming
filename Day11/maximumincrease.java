import java.util.*;
public class maximumincrease{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] nums=new int[n];
        for(int i=0;i<n;i++){
            nums[i]=sc.nextInt();
        }
        int len=1;
        int max=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                len++;
                max=Math.max(len,max);
            }else{
                len=1;
            }
        }
        System.out.println(max);
    }
}