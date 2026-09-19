import java.util.Scanner;

public class Solution1858A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        while(t-- > 0){
            long a = sc.nextLong();
            long b = sc.nextLong();
            long c = sc.nextLong();

            if(c % 2 == 0){
                if(a > b){
                    System.out.println("First");
                }else{
                    System.out.println("Second");
                }
            }else{
                if(a >= b){
                    System.out.println("First");
                }else{
                    System.out.println("Second");
                }
            }
        }
        sc.close();
    }
}