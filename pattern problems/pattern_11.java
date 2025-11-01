import java.util.*;

public class pattern_11 {
    public static void main(String[] args) {
        System.out.println("Enter number of rows...");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int num = 1;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j<= i; j++){
                System.out.print(num + " ");
                num++;
            }
            System.out.println();
        }
    }
}
