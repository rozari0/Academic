class Employee {
    private int id;
    private String name;
    public void setId(int id) {
        this.id = id;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getId() {
        return id;
    }
    public String getName() {
        return name;
    }
    public int calculateSalary(){
        return 0;
    }
    
};

class Worker extends Employee {
    private int baseSalary;
    private int bonus = 0;
    public void setBaseSalary(int baseSalary){
        this.baseSalary = baseSalary;
    }
    public void addBonus(int bonus){
        this.bonus += bonus;
    }
    @Override
    public int calculateSalary(){
        return bonus + baseSalary;
    }
    public void display(){
        System.out.println("ID: "+ getId());
        System.out.println("Name: "+ getName());
        System.out.println("Total Salary: "+ calculateSalary());
    }
};
class SuperVisor extends Employee {
    SuperVisor(){}
    private int baseSalary;
    private int bonus = 0;
    public void setBaseSalary(int baseSalary){
        this.baseSalary = baseSalary;
    }
    public void addBonus(int bonus){
        this.bonus += bonus;
    }
    @Override
    public int calculateSalary(){
        return bonus + baseSalary;
    }
    public void display(){
        System.out.println("ID: "+ getId());
        System.out.println("Name: "+ getName());
        System.out.println("Total Salary: "+ calculateSalary());
    }
};

public class Main {
    public static void main(String[] args){
    SuperVisor sup = new SuperVisor();
    sup.setId(1);
    sup.setName("Sakib Khan");
    sup.setBaseSalary(40000);
    sup.addBonus(500);
    sup.display();

    Worker worker = new Worker();
    worker.setId(2);
    worker.setName("Humayun Ahmed");
    worker.setBaseSalary(25000);
    worker.addBonus(96);
    worker.display();
    }    
}
