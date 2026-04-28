package Assignment_1;
class Admin{
int id;
String name;
double salary;
int allowance;

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

void setAllowance(int a){
this.allowance = a;
}
//getters
int getId(){
return this.id;
}

String getName(){
return this.name;
}

double getSalary(){
return this.salary;
}

int getAllowance(){
return this.allowance;
}
//display
void display(){
System.out.println("id" + this.getId() + "name " + this.getName() + "salary: " + this.getSalary() + "allowance" + this.getAllowance());
}

}
public class AdminTest{
public static void main(String args[]){
Admin a1;
a1 = new Admin();
a1.setId(101);
a1.setName("pragati");
a1.setSalary(50000.00);
a1.setAllowance(20000);
a1.display();
//hashcode
System.out.println("hashcode of a1" + a1.hashCode());
}
}