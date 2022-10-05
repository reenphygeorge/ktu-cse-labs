// Abstract Demo //
abstract class Shape {
    abstract void DispShape();
}

class Triangle extends Shape {
    void DispShape() {
        System.out.print("\nTriangle has 3 sides");
    }
}

class Rectangle extends Shape {
    void DispShape() {
        System.out.print("\nRectangle has 4 sides");
    }
}

class Hexagon extends Shape {
    void DispShape() {
        System.out.print("\nHexagon has 6 sides");
    }
}

public class Experiment7 {
    public static void main(String[] args) {
        Triangle t = new Triangle();
        t.DispShape();
        Rectangle r = new Rectangle();
        r.DispShape();
        Hexagon h = new Hexagon();
        h.DispShape();
    }
}
