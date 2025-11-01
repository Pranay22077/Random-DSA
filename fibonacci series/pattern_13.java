import java.util.*;
public class pattern_13 {
    public static long factorial(int n) {
        long result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    public static void main(String[] args) {
        System.out.println("Enter the number of rows..");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i <= n; i++){
            for (int j = 0; j <= i; j++){
                long num = factorial(i)/ (factorial(j) * factorial(i-j));
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}
