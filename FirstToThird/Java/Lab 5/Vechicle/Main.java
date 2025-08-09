class Vehicle {
  public void speedUp(int val) {

  }
}

class Car extends Vehicle {
  private int currentSpeed;

  Car(int initialSpeed) {
    currentSpeed = initialSpeed;
  }

  public int getCurrentSpeed() {
    return currentSpeed;
  }

  @Override
  public void speedUp(int val) {
    currentSpeed += val;
  }
}

class Bycycle extends Vehicle {
  private int currentSpeed;

  Bycycle(int initialSpeed) {
    currentSpeed = initialSpeed;
  }

  public int getCurrentSpeed() {
    return currentSpeed;
  }

  @Override
  public void speedUp(int val) {
    currentSpeed += val;
  }
}

public class Main {
  public static void main(String[] args) {
    Car car = new Car(50);
    car.speedUp(5);
    System.out.println("Current Speed is: " + car.getCurrentSpeed());

    Bycycle cycle = new Bycycle(5);
    cycle.speedUp(1);
    System.out.println("Current Speed is: " + cycle.getCurrentSpeed());

  }
}
