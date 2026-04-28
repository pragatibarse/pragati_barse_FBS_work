package Assignment_1;

class HR{
int id;
String name;
double salary;

//default constructor
 HR(){
id = 0;
name ="unknown";
salary = 0.0;
}
 
 //parameterized constructor
 HR(int id ,String nm, double sal){
	 this.id = id;
	 this.name = nm;
	 this.salary = sal;
 }

//setters
void setId(int i){
this.id = i;
}

void setName(String name){
this.name = name;
}

void setSalary(double sal){
this.salary = sal;
}

//getters
int getId() {
	return this.id;
}
String getName() {
	return this.name;
}
double getSalary() {
	return this.salary;
}
//toString
public String toString() {
return "HR[id = " + id + ",name =" + name + "salary =" + salary + "]";	
}
//display
void display() {
System.out.println("id:"+ this. getId() + "name : " + this.getName() + "salary : " + this.getSalary());
}
}

public class HrTest{
public static void main(String[] args) {
	
HR h1 =  new HR();//object created
h1.setId(101);
h1.setName("Rani");
h1.setSalary(30000.90);
 
//for parameterized constructor 
HR h2 = new HR(102,"pooja",45000);

//print object by toString()
System.out.println(h2);
h2.display();
h1.display();

//hashCode
System.out.println("Hashcode h1 : " + h1.hashCode());

}
}