import java.util.*;
public class pattern_8 {
    public static void main(String[] args) {
        System.out.println("Enter number of rows...");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ul = n;
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<=ul; j++){
                if (j == ul){
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }

            }
            ul--;
            System.out.println();
        }
    }
}
