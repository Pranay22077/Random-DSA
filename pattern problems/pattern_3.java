import java.util.*;

public class pattern_3 {
    public static void main(String[] args) {

    System.out.println("Enter the number of rowss...");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int space = n-1;
    int star = 1;   
        for (int j = 1; j<=n; j++){
            for (int i = 1; i<=space; i++){
                System.out.print("\t");
            }
            for (int i = 1; i<=star; i++){
                System.out.print("*\t");
            }
            System.out.println();
            space--;
            star++;
        }
    }
}
