import java.util.*;

public class pattern_7 {
    public static void main(String[] args) {
        System.out.println("Enter the number of rows...");

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int space = 1;
        int star = n/2;
        for (int j = 1; j<=n; j++){
            for (int i = 1; i<=star; i++){
                System.out.print("* ");
            }
            for (int i = 1; i<= space; i++){
                System.out.print("  ");
            }
            for (int i = 1; i<=star; i++){
                System.out.print("* ");
            }
            if (j< (n+1)/2){
            space +=2;
            star--;
            } else {
                space -=2;
                star ++;
            }
            System.out.println();
        }

        
    }
}
