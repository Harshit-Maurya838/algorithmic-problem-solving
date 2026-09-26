import java.util.Scanner;

public class Solution1829B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int maxStreak = 0;
            int currentStreak = 0;

            for(int i= 0; i<n; i++){
                int x = sc.nextInt();
                if (x == 0) {
                    currentStreak++;
                    maxStreak = Math.max(maxStreak, currentStreak);
                }else{
                    currentStreak = 0;
                }
            }

            System.out.println(maxStreak);
        }

        sc.close();
    }
}