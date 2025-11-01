import java.util.*;
public class gcd_and_lcm{
    public static void main(String[] args) {
        System.out.println("Program start....");
        System.out.println("====== GCD & LCM =====");
        System.out.print("Enter first number (integers only): ");
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();

        System.out.print("Enter second number (integer only): ");
        int num2 = sc.nextInt();
        System.out.print("Choose for GCD (1) or LCM (2): ");
        int choice = sc.nextInt();
        if (choice == 1){
            int min = Math.min(num1, num2);
            // System.out.println("Minimum of two numbers is: " + min);
            int temp_gcd = 1;
            for (int i = 1; i<=min; i++){
                if (num1 % i == 0 && num2 % i == 0){
                    temp_gcd = i;
                }
            }
            if (temp_gcd == 1){
                System.out.println("The numbers are co-prime and their GCD is 1");
            }
            else{
                System.out.println("GCD of " + num1 + " and " + num2 + " is " + temp_gcd);
            }
        }
        else if (choice == 2){
            int inc = 1;
            int temp_lcm = 1;
            while (inc % num1 != 0 || inc % num2 != 0){
                inc += 1;
                temp_lcm = inc;
            }
            if (inc == 1){
                System.out.println("No LCM");
            }else{
                System.out.println("LCM of " + num1 + " and " + num2 + " is " + temp_lcm);
            }
        }
        else{
            System.out.println("Invalid Choice! Choose out of 1 or 2 only");
        }
    }
}