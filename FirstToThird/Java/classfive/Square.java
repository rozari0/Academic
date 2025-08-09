
public class Square {
    private int length;

    public Square(int length) {
        this.length = length;
    }

    public void setLength(int length) {
        this.length = length;
    }

    public int getLength() {
        return length;
    }

    public int getArea() {
        return length * length;
    }
}