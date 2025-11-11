import java.util.*;

public class pattern_14 {
    public static void main(String[] args) {
        System.out.println("Enter the number whose table u want...");
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        for (int i = 1; i <= 10; i++){
            System.out.println(n + " x " + i + " = " + (n*i));
        }
    }
}
