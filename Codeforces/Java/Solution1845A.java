import java.util.Scanner;

public class Solution1845A {
    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        int k = sc.nextInt();
        int x = sc.nextInt();

        if(x != 1){
            System.out.println("YES");
            System.out.println(n);
            for(int i= 0; i< n; i++){
                System.out.print(1 + (i + 1 == n ? "" : " "));
            }
            System.out.println();
            return;
        }

        if(n % 2 == 0 && k >= 2){
            System.out.println("YES");
            System.out.println(n / 2);
            for(int i=0; i<n / 2; i++){
                System.out.print(2 + (i + 1 == n / 2 ? "" : " "));
            }
            System.out.println();
            return;
        }

        if(n % 2 != 0 && k >= 3){
            System.out.println("YES");
            int twos = (n - 3) / 2;
            System.out.println(twos + 1);
            System.out.print(3);
            for(int i=0; i<twos; i++){
                System.out.print(" " + 2);
            }
            System.out.println();
            return;
        }

        System.out.println("NO");
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;

        int t = sc.nextInt();
        while(t-- > 0){
            solve(sc);
        }

        sc.close();
    }
}