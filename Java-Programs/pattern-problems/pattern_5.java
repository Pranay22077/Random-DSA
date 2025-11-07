import java.util.*;

public class pattern_5 {
    public static void main(String[] args) {
//=================DIAMOND PATTERN===============
// Upper Half
        for (int i = 1; i <= 7; i++){
            //upper left
            for (int j = i; j<=6; j++){
                System.out.print("  ");
            }
            for (int k = 1; k <= i; k++){
                System.out.print(" *");
            }

            //upper right
            for (int m = 2; m<=i; m++){
                System.out.print(" *");
            }
            System.out.println("");
        }

//Lower Half
        for (int i = 1; i <= 6; i++){
            
            //lower left
            for (int j = 1; j<=i; j++){
                System.out.print("  ");
            }
            for (int k = 0; k<=6-i; k++){
                System.out.print(" *");
            }

            //lower right
            for (int j = i+1; j<=6; j++){
                System.out.print(" *");
            }
            System.out.println("");
        }


        
    }
}
