import java.util.*;

public class multiplyby2divideby6{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int cnt3=0;
            int cnt2=0;
            while(n>0 && n%3==0){
                cnt3++;
                n/=3;
            }

            while(n>0 && n%2==0){
                cnt2++;
                n/=2;
            }

            if(n>1 || cnt2>cnt3){
                System.out.println(-1);
            }else{
                System.out.println(cnt3+(cnt3-cnt2));
            }
        }
    }
}