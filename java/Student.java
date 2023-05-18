public class Student {
    String name;
//    String matricule;
    int age;
    String address;

    //this is the constructor
    public Student(String name, int age, String address){
        this.name = name;
        this.age =age;
        this.address = address;
    }
    //declaring the setters and getters for modifying the attributes
    public void  setName(String name){
        this.name = name;
    }
    public  void  setAge(int age){
        this.age = age;
    }
    public  void setAddress(String address){
        this.address = address;
    }
    public  String getName(){
        return  name;
    }
    public int getAge(){
        return age;
    }
    public String getAddress(){
        return  address;
    }
    public  String toString(){
        return (
                "Student name is " +this.getName() +
                        ", age is " + this.getAge() +
                        " and address is: " + this.getAddress()
                );
    }
    public  static void  main(String[] args){
        Student salif = new Student("Salif", 20, "Molyko, Buea");
        System.out.println(salif.toString());
    }
}
