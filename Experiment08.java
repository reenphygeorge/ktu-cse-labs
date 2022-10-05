// Abstract & Interface Demo //
import java.util.*;

abstract class Animal {
    protected int legs;
    protected Animal(int legs) {
        this.legs = legs;
    }
    abstract void eat();
    void walk() {
        System.out.print("\nThis animal walks on "+legs+" legs");
    }
}

class Spider extends Animal {
    Spider() {
        super(8);
    }
    void eat() {
        System.out.print("\nSpider eats insects");
    }
}

interface Pet {
    abstract String getName();
    abstract void setName(String name);
    abstract void play();
}

class Cat extends Animal implements Pet {
    String name;
    Cat(String name) {
        super(4);
        this.name = name;
    }
    void eat() {
        System.out.print("\nCat eats fish");
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void play() {
        System.out.print("\nCat plays with ball");
    }
}

class Fish extends Animal implements Pet {
    String name;
    Fish(String name) {
        super(0);
        this.name = name;
    }
    void eat() {
        System.out.print("\nFish eats plants");
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void play() {
        System.out.print("\nFish plays with small fish");
    }
    void walk() {
        System.out.print("\nFish has no legs");
    }
}

public class Experiment8 {
    public static void main(String[] args) {
        System.out.print("\nFISH");
        String name = "Mimi";
        Fish f = new Fish(name);
        f.eat();
        f.walk();
        System.out.print("\nThis fish's name is "+f.getName());
        f.play();

        System.out.print("\n\nCAT");
        name = "Fluffy";
        Cat c = new Cat(name);
        c.eat();
        c.walk();
        System.out.print("\nThis cat's name is "+c.getName());
        c.setName("Moose");
        System.out.print("\nThis cat's name is "+c.getName());
        c.play();

        System.out.print("\n\nSPIDER");
        Spider s = new Spider();
        s.eat();
        s.walk();
    }
}
