import java.util.Scanner;

public class Solution1788 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n];
            int totalTwos = 0;

            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
                if (a[i] == 2) {
                    totalTwos++;
                }
            }

            if(totalTwos % 2 != 0){
                System.out.println(-1);
                continue;
            }

            int target = totalTwos / 2;
            int currentTwos = 0;
            int ans = -1;

            for(int i = 0; i < n - 1; i++){
                if(a[i] == 2){
                    currentTwos++;
                }
                if(currentTwos == target){
                    ans = i + 1;
                    break;
                }
            }

            System.out.println(ans);
        }

        sc.close();
    }
}