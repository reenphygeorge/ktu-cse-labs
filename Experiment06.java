// Super Demo //
import java.util.*;

class Employee {
    int basepay, da, hra, grosspay;
    Employee(int basepay, int da, int hra) {
        this.basepay = basepay;
        this.da = da;
        this.hra = hra;
    }

    void display() {
        System.out.print("\nThis is Employee class");
    }
}

class Engineer extends Employee {
    Engineer(int basepay, int da, int hra) {
        super(basepay,da,hra);
    }
    void display() {
        System.out.print("\nThis is Engineer class");
    }
    void calcGross() {
        System.out.print("\nThe gross salary is: "+(basepay+da+hra));
        super.display();
    }
}

public class Experiment6 {
    public static void main(String[] args) {
        int basepay, da, hra;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the base pay: ");
        basepay = sc.nextInt();
        System.out.print("Enter the da: ");
        da = sc.nextInt();
        System.out.print("Enter the hra: ");
        hra = sc.nextInt();
        Engineer e = new Engineer(basepay, da, hra);
        e.calcGross();
        e.display();
    }
}
