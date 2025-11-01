import java.util.*;

public class pattern_12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter number of rows");
        int n = sc.nextInt();
        int prev = 0;
        int curr = 1;
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<=i; j++){
                int next = prev + curr;
                System.out.print(next + " ");
                prev = curr; 
                curr = next;
            }
            System.out.println();
        }
    }
}
