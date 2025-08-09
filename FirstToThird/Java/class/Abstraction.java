abstract class Car {
  public abstract void start();
}

class Tata extends Car {
  public void start(){
    System.out.println("Tata car is strating");
  }
}

public class Abstraction {
  public static void main(String[] args) {
    Car tata = new Tata();
    tata.start();
    
  }
}
