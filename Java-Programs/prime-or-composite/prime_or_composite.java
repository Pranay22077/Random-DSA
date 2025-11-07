import java.util.*;
public class prime_or_composite{
    public static void main(String[] args) {
        System.out.println("====Program Started====");
        System.out.println("Enter how many numbers u wanna check: ");
        Scanner sc = new Scanner(System.in);
        int times = sc.nextInt();
        int flag = 1;
        for (int i = 1; i<= times; i++){
            System.out.println("Enter number " + i + " :");
            int temp = sc.nextInt();
            if (temp == 0 || temp == 1){
                System.out.println("The numer is neither prime nor composite");
            }
            else{
                for (int j = 2; j<temp;j++){
                    if (temp % j == 0){
                        flag = 0;
                    }
                }
                if (flag == 0){
                    System.out.println(temp + " is composite");
                } else {
                    System.out.println(temp + " is prime");
                }
                
            }
        }
        System.out.println("====Program Ended====");

    }
}