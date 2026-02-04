import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class doremyspaint3{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            HashMap<Integer,Integer>hm=new HashMap<>();
            int cnt=0;
            for(int i=0;i<n;i++){
                if(!hm.containsKey(arr[i])){
                    cnt++;
                }
                hm.put(arr[i],hm.getOrDefault(arr[i],0)+1);
            }
            if(cnt>2)System.out.println("No");
            else if(cnt==2){
                int a=0;
                int b=0;
                boolean flag=true;
                for(Map.Entry<Integer,Integer>m:hm.entrySet()){
                    if(flag){
                        a=m.getValue();
                        flag=false;
                    }else b=m.getValue();
                }
                if(a==b || a-1==b || a==b-1)System.out.println("Yes");
                else System.out.println("No");
            }else{
                System.out.println("Yes");
            }
        }
    }
}