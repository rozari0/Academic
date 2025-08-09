class Shape {
    public int area(int length){
        return length * length;
    }
    public int area(int length, int width){
        return length * width;
    }
    public double area(double radius){
        return (Math.PI * radius * radius);
    }

}


public class Main {
    public static void main(String[] args) {
        Shape shape = new Shape();
        System.out.println("Area of square: " + shape.area(5)); 
        System.out.println("Area of rectangle: " + shape.area(5, 10)); 
        System.out.printf("Area of circle: %.2f\n", shape.area(7.0));
    }
}
