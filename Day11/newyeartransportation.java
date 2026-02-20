import java.util.*;

public class newyeartransportation{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[] nums=new int[n-1];
        for(int i=0;i<n-1;i++){
            nums[i]=sc.nextInt();
        }
        int i=0;
        boolean possible=false;
        while(i<n-1){
            if(nums[i]+i+1==m){
                possible=true;
                break;
            }
            i+=nums[i];
        }
        if(possible){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}