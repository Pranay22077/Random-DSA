import java.util.*;

public class pattern_10 {
    public static void main(String[] args) {
        System.out.println("Enter no. of rows...");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int center = (n+1)/2;
        int ll = center;
        int ul = center;
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<= n; j++){
                if (j == ll || j == ul){
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            if (i <= n/2){
                    ll--;
                    ul++;
                } else {
                    ll++;
                    ul--;
                }
            System.out.println();
        }
        System.out.println();
        System.out.println();
    }
}
