import java.util.*;

public class pattern_9 {
    public static void main(String[] args) {
        System.out.println("Enter no. of rows...");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ll = 1;
        int ul = n;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j<=n; j++){
                if (j == ll || j == ul){
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            if (i <= n/2){
                ll ++;
                ul --;
            } else {
                ll--;
                ul++;
            }
            System.out.println();
        }
    }
}
