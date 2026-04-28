package Assignment_1;

class SalesManager{
int id;
String name;
double salary;
double incentive;
int target;

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

void setIncentive(double inc){
this.incentive = inc;
}
void setTarget(int target){
this.target = target;
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

double getIncentive(){
return this.incentive;
}

int getTarget(){
return this.target;
}
//display
void display(){
System.out.println("id "+ this.getId() + "name" + this.getName() + "Salary :" + this.getSalary() + "Incentivve" + this.getIncentive() + "target" + this.getTarget());
}
}


public class SalesManagerTest{
public static void main(String args[]){
SalesManager s1;
s1 = new SalesManager();
s1.setId(101);
s1.setName("rashi");
s1.setSalary(34000.50);
s1.setIncentive(200.50);
s1.setTarget(20);
s1.display();
//print hashcode
System.out.println("print hashCode of s1:" + s1.hashCode());

}
}