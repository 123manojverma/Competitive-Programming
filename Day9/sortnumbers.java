import java.util.Scanner;

public class sortnumbers {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a,b,c;
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();
        if(a<b){
            if(a<c){
                System.out.println(a);
                if(b<c){
                    System.out.println(b);
                    System.out.println(c);
                }else{
                    System.out.println(c);
                    System.out.println(b);
                }
            }else{
                System.out.println(c);
                System.out.println(a);
                System.out.println(b);
            }
        }else if(b<c){
            System.out.println(b);
            if(a<c){
                System.out.println(a);
                System.out.println(c);
            }else{
                System.out.println(c);
                System.out.println(a);
            }
        }else{
            System.out.println(c);
            System.out.println(b);
            System.out.println(a);
        }
        System.out.println();
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
