import java.util.*;
public class prime_factorization{
    public static void main(String[] args) {
        System.out.println("Program starts...");
        System.out.println("===== PRIME FACTORIZATION =====");
        System.out.print("Enter a number whose prime factorization you want: ");

        Scanner scn = new Scanner(System.in);
        int num = scn.nextInt();
        // Start dividing from 2
        for (int i = 2; i <= num; i++) {
            while (num % i == 0) {  // Keep dividing until not divisible
                System.out.print(i + " ");
                num = num / i;
            }
        }
    }
}