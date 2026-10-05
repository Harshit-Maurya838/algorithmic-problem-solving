import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class TwoSum {

    public static int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++){
            int complement = target - nums[i];
            
            if(map.containsKey(complement)){
                return new int[] { map.get(complement), i };
            }
            
            map.put(nums[i], i);
        }
        
        return new int[] {};
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] nums = new int[n];

        System.out.println("Enter the elements of the array:");
        for(int i = 0; i < n; i++){
            nums[i] = sc.nextInt();
        }

        System.out.print("Enter the target: ");
        int target = sc.nextInt();

        int[] result = twoSum(nums, target);
        if(result[0] == -1){
            System.out.println("No solution found.");
        }else{
            System.out.println("Indices of the two numbers that add up to the target: " + result[0] + ", " + result[1]);
        }

        sc.close();
    }
}
