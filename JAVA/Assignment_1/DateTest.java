package Assignment_1;
class Date{
int day;
int month;
int year;
String dow;
void setDay(int d) {
this.day = d;
}
void setMonth(int m) {
this.month = m;
}
void setYear(int y) {
	this.year = y;
}
void setDow(String str) {
	
	this.dow =str;
}
}

public class DateTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      Date d1;
      d1= new Date();
      d1.setDay(10);
      d1.setMonth(5);
      d1.setYear(2026);
      d1.setDow("monday");
      System.out.println(d1.day);
      System.out.println(d1.month);
      System.out.println(d1.year);
      System.out.println(d1.day +"/" + d1.month + "/" + d1.year + "/"+ d1.dow);
	}

}
