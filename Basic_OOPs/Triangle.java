/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - Constructors.

DATE - 30th November, 2021

*******************************************************************************/

public class Triangle {
    
    static int a,b,c;
    
    // No-arg Constructor //
    static void Triangle() {
        a = 3;
        b = 4;
        c = 5;
    }

    // Parameterized Constructor //
    static void Triangle(int x , int y , int z) {
        a = x;
        b = y;
        c = z;
    }

    public static void main(String[] args) {
        // Calling No-arg Constructor //
        Triangle();

        // Calling Parameterized Constructor //
        Triangle(3,4,5);

        // Perimeter //
        int p = a+b+c;
        

        System.out.print("Perimeter: "+p+"\n");
    }
}