/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - Area of 2 nos using methods.

DATE - 30th November, 2021

*******************************************************************************/

import java.util.*;

public class Area {
    
    // Global Variables //
    public static int l , b;

    // Function Definitions //
    static void setDim() {
            
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length: ");
        l = sc.nextInt();
        System.out.print("Enter the breadth: ");
        b = sc.nextInt();
    }

    static int getArea(int l , int b) {
            
        int a = l*b;
        return a;

    }

    // Driver Function //
    public static void main(String[] args) {
        
        setDim();
        int a = getArea(l , b);
        System.out.print("Area is "+a+"\n");
        
    }

}