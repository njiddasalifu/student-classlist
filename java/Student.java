public class Student {
    String name;
//    String matricule;

    int age;
    String address;

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
}
