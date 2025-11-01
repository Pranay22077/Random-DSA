import java.util.*;
public class pattern_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows...");
        int n = sc.nextInt();
        int space = 0;
        int star = n;
        for (int i = n; i>=1; i--){
            for (int j = 1; j<=space; j++){
                System.out.print("\t");
            }

            for (int j = 1; j<= star; j++){
                System.out.print("\t*");
            }
            System.out.println();
            space++;
            star--;
        }
    }
}
