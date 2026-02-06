import java.util.Scanner;

public class alicebob {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int alice=0,bob=0,a=0,b=0;
        int i=0,j=n-1;
        while(i<=j){
            if(alice<=bob){
                alice+=arr[i];
                i++;
                a++;
            }else{
                bob+=arr[j];
                j--;
                b++;
            }
        }
        System.out.println(a+" "+b);
    } 
}
