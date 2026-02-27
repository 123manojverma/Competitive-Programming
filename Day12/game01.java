import java.util.*;

public class game01 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
            int one=0;
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)=='1')one++;
            }
            int zero=s.length()-one;

            if(Math.min(zero,one)%2!=0){
                System.out.println("DA");
            }else{
                System.out.println("NET");
            }
        }
    }
}
