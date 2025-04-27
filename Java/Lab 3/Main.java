class Person {
    private String name;
    private int age;

    Person() {
    }

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void setName(String name) {
        this.name = name;
    }

    String getName() {
        return name;
    }

    void setAge(int age) {
        this.age = age;
    }

    int getAge() {
        return age;
    }
}

public class Main {
    public static void main(String[] args) {
        Person daniel = new Person();

        daniel.setName("Daniel");
        daniel.setAge(20);

        System.out.println("Name: " + daniel.getName());
        System.out.println("Age: " + daniel.getAge());

        System.out.println();

        Person atif = new Person("Atif", 21);
        System.out.println("Name: " + atif.getName());
        System.out.println("Age: " + atif.getAge());

    }
}
