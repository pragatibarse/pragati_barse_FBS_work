package Assignment_1;

class Employee{
int id;
String name;
double salary;

void setId(int i){
this.id = i;
}

void setName(String name) {
this.name = name;
}

double setSalary(double sal){
this.salary = sal;
return 0;
}
}


public class EmployeeTest{
public static void main(String args[]){
Employee e1;
e1 = new Employee();
e1.setId(101);
e1.setName("raj");
e1.setSalary(35000.00);

System.out.println("id :" + e1.id + " Name: "+ e1.name  +  " salary: " + e1.salary);
}
}