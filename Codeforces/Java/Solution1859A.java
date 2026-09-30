package Codeforces.Java;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution1859A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n];

            int maxValue = 0;
            for(int i=0; i<n; i++){
                a[i] = sc.nextInt();
                maxValue = Math.max(maxValue, a[i]);
            }

            List<Integer> b = new ArrayList<>();
            List<Integer> c = new ArrayList<>();
            for(int x : a){
                if(x == maxValue){
                    c.add(x);
                }else{
                    b.add(x);
                }
            }

            if(b.isEmpty()){
                System.out.println(-1);
            }else{
                System.out.println(b.size() + " " + c.size());

                for(int i = 0; i < b.size(); i++){
                    System.out.print(b.get(i) + (i + 1 == b.size() ? "" : " "));
                }
                System.out.println();

                for(int i = 0; i < c.size(); i++){
                    System.out.print(c.get(i) + (i + 1 == c.size() ? "" : " "));
                }
                System.out.println();
            }
        }

        sc.close();
    }
}
