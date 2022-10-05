/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - Classes & Objects.

DATE - 30th November, 2021

*******************************************************************************/

import java.util.*;

public class Student {
        
        String name, ph_no;
        int roll_no;

        public static void main(String[] args) {
            
            Student s1 = new Student();
            s1.name = "John";
            s1.roll_no = 2;
            s1.ph_no = "+91-9764807685";
            
            Student s2 = new Student();
            s2.name = "Sam";
            s2.roll_no = 4;
            s2.ph_no = "+91-9435620987";
            
            System.out.print("Name: "+s1.name+"\nRoll No: "+s1.roll_no+"\n\n");
            System.out.println("Name: "+s2.name+"\nRoll No: "+s2.roll_no+"\n");
        }
}