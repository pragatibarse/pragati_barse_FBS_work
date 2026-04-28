package Assignment_1;

class Student{
int frn;
String studentName;
float distanceCoverd;

void setFrn(int fn){
 this.frn = fn;
}
void setStudentName(String str){
this.studentName = str;
}
void setDistanceCoverd(float d){
this.distanceCoverd = d;
}
}

public class StudentTest{
public static void main(String args[]){
Student s1;
s1 = new Student();//object
s1.setFrn(101);
s1.setStudentName("pragati");
s1.setDistanceCoverd(5);
System.out.println("FRN: " + s1.frn + " Name: " + s1.studentName + " Distance: " + s1.distanceCoverd);


}
}
