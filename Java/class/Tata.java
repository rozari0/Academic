interface Car {
  public void start();
}

public class Tata implements Car {
  public void start() {
    System.out.println("Starting Tata Car.");
  }
  public static void main(String[] args) {
    Car tata = new Tata();
    tata.start();
    
  }
  
}
