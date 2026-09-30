import java.util.Scanner;

public class Solution1834A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int neg = 0, pos = 0;

            for(int i = 0; i < n; i++){
                int x = sc.nextInt();
                if(x == -1){
                    neg++;
                }else{
                    pos++;
                }
            }

            int ops = 0;

            if(neg > n / 2){
                int needToChange = neg - (n / 2);
                ops += needToChange;
                neg -= needToChange;
            }

            if(neg % 2 != 0){
                ops += 1;
            }

            System.out.println(ops);
        }

        sc.close();
    }
}