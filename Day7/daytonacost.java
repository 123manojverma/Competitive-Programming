import java.util.Scanner;

public class daytonacost {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int k=sc.nextInt();
            int[] arr=new int[n];
            boolean flag=false;
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
                if(arr[i]==k){
                    flag=true;
                }
            }
            if(flag){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
