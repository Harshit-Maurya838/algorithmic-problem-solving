import java.util.Scanner;

public class Solution1805A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int totalXor = 0;

            for(int i = 0; i < n; i++){
                int a = sc.nextInt();
                totalXor ^= a;
            }

            if(n % 2 != 0){
                System.out.println(totalXor);
            }else{
                if(totalXor == 0){
                    System.out.println(0);
                }else{
                    System.out.println(-1);
                }
            }
        }

        sc.close();
    }
}