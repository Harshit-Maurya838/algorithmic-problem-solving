import java.util.Scanner;

public class Solution1806A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long c = sc.nextLong();
            long d = sc.nextLong();

            if(d < b || (a + d - b) < c){
                System.out.println(-1);
            }else{
                long diagonalMoves = d - b;
                long leftMoves = (a + diagonalMoves) - c;
                System.out.println(diagonalMoves + leftMoves);
            }
        }

        sc.close();
    }
}
