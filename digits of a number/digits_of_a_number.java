import java.util.*;
public class digits_of_a_number {
    public static void main(String[] args) {
        System.out.print("Program start....\n");
        System.out.println("=====EXTRACTING DIGITS OF A NUMBER=====");
        System.out.print("Enter any number: ");

        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int dig,b = 0;
        while (num != 0){

            dig = num % 10;
            b = b*10 + dig;
            num = num/10; 
        }
        System.out.println("The reversed number is: " + b);
    }
}
