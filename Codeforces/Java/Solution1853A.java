import java.util.Scanner;

public class Solution1853A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n];
            for(int i=0; i<n; i++){
                a[i] = sc.nextInt();
            }

            int minDiff = Integer.MAX_VALUE;
            boolean isUnsorted = false;

            for(int i=0; i < n-1; i++){
                if (a[i] > a[i + 1]) {
                    isUnsorted = true;
                    break;
                }
                minDiff = Math.min(minDiff, a[i + 1] - a[i]);
            }

            if(isUnsorted){
                System.out.println(0);
            }else{
                System.out.println((minDiff / 2) + 1);
            }
        }

        sc.close();
    }
}
