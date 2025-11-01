import java.util.*;
public class pattern_5_alternate {
    public static void main(String[] args) {
        System.out.println("Enter the number of rows...");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int space = n/2;
        int rows = 1;

        for (int j = 1; j<=n; j++){
            for (int i = 1; i<= Math.abs(space); i++){
                System.out.print("  ");
            }
            for (int i = 1; i<=rows; i++){
                System.out.print("* ");
            }
            System.out.println();
            space--;
            if (j <= n/2){
            rows += 2;
            } else {
                rows -= 2;
            }
        }
    }
}
