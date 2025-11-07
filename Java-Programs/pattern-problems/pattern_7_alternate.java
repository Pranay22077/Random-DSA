import java.util.*;
public class pattern_7_alternate {
    public static void main(String[] args) {
        System.out.println("Enter the number of rows...");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int center = (n+1)/2;
        int space = 1;
        int star = n/2;
        int ll = center;
        int ul = center;
        
        for (int i = 1; i<=n; i++){

            for (int j = 1; j<= star; j++){
                System.out.print("* ");
            }

            for (int j = ll; j<= ul; j++){
                System.out.print("  ");
            }
            if (i <= (n)/2){
                ll --;
                ul ++;
            }
            else{
                ll ++;
                ul --;
            }

            for (int j = 1; j<= star; j++){
                System.out.print("* ");
            }

            if (i <= (n)/2){
                star --;
            } else {
                star ++;
            }
            System.out.println();
        }
    }
}
