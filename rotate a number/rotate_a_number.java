import java.util.*;
public class rotate_a_number {
    public static void main(String[] args) {
        System.out.println("Program start....");
        System.out.println("=====ROTATE OF A NUMBER=====");
        System.out.print("Enter a number to be reversed (positive integer only): ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.print("Enter how many times you want the number to be reversed (positive integers only): ");
        int rot = sc.nextInt();
        int flag = 0;
        int temp = num;
        while (temp !=0){
            flag +=1;
            temp = temp/10;
        }
        int digits = flag;
        System.out.println("Number of digits in number: " + digits);
        double final_num = 0;
        if (rot > digits){
            rot -= digits;
        }
        else if(rot < 0){
            rot = digits + rot;
        }
        else{
            rot = rot;
        }
        int divisor = (int)Math.pow(10,rot);
        int a = num % divisor;
        int b = num / divisor;
        int multiplier = (int)Math.pow(10,(digits-rot));
        final_num = a*multiplier + b;
        
        System.out.println("Number after a rotation is " + (int)final_num);
    }
    
}
