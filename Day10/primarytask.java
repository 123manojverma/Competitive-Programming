import java.util.Scanner;

public class primarytask{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int a=sc.nextInt();
            int val=0,power=0;
            if(a<=101){
                System.out.println("NO");
                continue;
            }
            int p=1;
            boolean zero=false;
            while(a!=0){
                if(a<100){
                    val=a;
                    break;
                }
                if(a>=100 && a<=1000){
                    if(a%10==0){
                        zero=true;
                    }
                }
                power=(a%10)*p+power;
                p*=10;
                a/=10;
            }
            if(zero){
                System.out.println("NO");
            }
            else if(val==10 && power>=2){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}