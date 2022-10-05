// Try - Catch //
import java.util.*;

public class Experiment9 {
    public static void main(String[] args) {
        int a,b,div;
        char ch = 'y';
        Scanner sc = new Scanner(System.in);
        while(ch == 'y') {
            System.out.print("Enter the first no: ");
            a = sc.nextInt();
            System.out.print("Enter the second no: ");
            b = sc.nextInt();
            try {
                div = a/b;
                System.out.print("Result: "+div);
            }
            catch (Exception e) {
                    System.err.print("Div by zero not allowed");
            }
            System.out.print("\nDo you wanna continue <y/n>");
            ch = sc.next().charAt(0);
        }
    }
}
