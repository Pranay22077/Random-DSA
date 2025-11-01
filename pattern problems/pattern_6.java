import java.util.*;

public class pattern_6 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows...");
        int n = sc.nextInt();
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<=i; j++){
                if (i == j){
                    System.out.print("*\t");
                }
                else{
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
}
