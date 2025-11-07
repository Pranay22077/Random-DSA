import java.util.*;
public class inverse_of_a_number{
    public static void main(String[] args) {
        System.out.println("Program start....");
        System.out.println("=====INVERSE OF A NUMBER=====");
        System.out.print("Enter a number to be inversed (positive integer only): ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        double final_num = 0;
        int dig,b = 0, flag = 1;
        while (num != 0){

            dig = num % 10;
            
            
            b = b*10 + dig;
            double base = flag * Math.pow(10, dig-1);
            final_num += base;
            System.out.print(dig + "; ");
            System.out.println("Digit: " + flag);
            
            for (int i = 1; i <= 7; i++){
                if (flag == i){

                }
            }
            num = num/10; 
            flag+=1;
        }
        System.out.println(" Final number: " + final_num);
    }
}