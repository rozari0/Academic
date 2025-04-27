class Outer {
    int var1 = 10;

    class Inner {
        int var2 = 5;

    }
}

public class Main {
    public static void main(String[] args) {
        Outer outer = new Outer();
        Outer.Inner inner = outer.new Inner();
        System.out.println("Sum of var1 and var2: " + (outer.var1 + inner.var2));
    }
}
