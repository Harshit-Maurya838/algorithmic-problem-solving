import java.util.Scanner;

public class Solution1878A{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            boolean found = false;

            for(int i=0; i<n; ++i){
                int x = sc.nextInt();
                if(x == k){
                    found = true;
                }
            }

            if(found){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }


        sc.close();
    }
}