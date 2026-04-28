package Assignment_1;

class PlacedStudent{
int frn;
String studentName;
double distanceCovered;
String companyName;
String designaton;

void setFrn(int f){
this.frn = f;
}

void setStudentName(String str){
this.studentName = str;
}

void setDistanceCovered(double d){
this.distanceCovered = d;
}

void setCompanyName(String str){
this.companyName=str;
}

void setDesignation(String str){
this.designaton = str;
}
}

public class PlacedStudentTest {
public static void main(String args[]){
PlacedStudent ps;
ps = new PlacedStudent ();//obj created
ps.setFrn(101);
ps.setStudentName("Rani");
ps.setDistanceCovered(12.7);
ps.setCompanyName("wipro");
ps.setDesignation("full-stack developer");

System.out.println(" Frn: " + ps.frn + " Name: " + ps.studentName + "Distance: "+ ps.distanceCovered + "company Name: " + ps.companyName + "designation: " + ps.designaton);
}

}
