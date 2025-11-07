import java.util.*;

public class fibonacci {
    public static void main(String[] args) {
        System.out.println("Program Start....");
        System.out.println("====FIBONACCI SERIES====");
        System.out.print("Enter the number of terms in the series: ");
        Scanner sc = new Scanner(System.in);
        int terms = sc.nextInt();
        int prev = 0;
        int curr = 1;
        System.out.print(prev + " " + curr + " ");
        for (int i = 1; i <= terms; i++){
            int next = prev + curr;
            System.out.print(next + " ");
            prev = curr; 
            curr = next; 
            
        }

    }
    
}
