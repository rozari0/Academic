import java.util.Scanner;

public class ExceptionExample{
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int num1, num2;
    System.out.print("Enter value for first number: ");
    num1 = scanner.nextInt();

    System.out.print("Enter value for second number: ");
    num2 = scanner.nextInt();

    try {
      int result = num1 / num2;

      System.out.println("Result: " + result);
    } catch (Exception e) {
      System.out.println("Error!");
    }

  }
}
