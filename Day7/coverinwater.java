import java.util.Scanner;
public class coverinwater {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            String s=sc.next();
            boolean continuous=false;
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s.charAt(i)=='.' && i+2<n && s.charAt(i+1)=='.' && s.charAt(i+2)=='.'){
                    continuous=true;
                    break;
                }else{
                    if(s.charAt(i)=='.')cnt++;
                }
            }
            if(continuous){
                System.out.println(2);
            }else{
                System.out.println(cnt);
            }
        }
    }
}
