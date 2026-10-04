import java.util.Scanner;

public class Solution1777A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n];

            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
            }

            int ops = 0;
            for(int i = 0; i < n - 1; i++){
                if(a[i] % 2 == a[i + 1] % 2){
                    ops++;
                }
            }

            System.out.println(ops);
        }

        sc.close();
    }
}