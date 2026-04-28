package Assignment_1;
 class BankAccount{
  int accNum;
  String holderName;
  double currentBal;
  float interestRate;

  
  //default constructor
  BankAccount(){
	  this.accNum = 0;
      this.holderName = "NA";
      this.currentBal = 0;
      this.interestRate = 0;
  }
  
  //parameterized constructor
  BankAccount(int accnum, String holdernm, double currentbl, float intrate){
	  this.accNum = accnum;
	  this.holderName =holdernm;
	  this.currentBal = currentbl;
	  this.interestRate = intrate;
  }
  
  
void setAccNum(int a){
this.accNum = a;
}

void setHolderName(String name){
this.holderName = name;
}

void setCurrentBal(double b){
this.currentBal = b;
}

void setInterestRate(float i){
this.interestRate = i;
}

//getter
int getAccNum(){
return this.accNum;
}
String getHolderName(){
return this.holderName;
}
double getCurrentBal(){
return this.currentBal;
}
float getInterestRate(){
return this.interestRate;
}

//display
void display() {
System.out.println("acc.num" + this.getAccNum() + " holder name: " + this.getHolderName() + " current balence: " + this.getCurrentBal() + "Interest" + this.getInterestRate());
}

//toString method
public String toString() {
	return" BankAccount[Account number  " + accNum + " Holder Name" + holderName + " Current balence  " + currentBal + " Interest Rate "+  interestRate + "]";
}

}

public class BankAccountTest{
public static void main(String args[]){
	
//BankAccount b1 = new BankAccount(101,"pragati",23000,3400);

BankAccount b1 = new BankAccount();

b1.setAccNum(10001);
b1.setHolderName("raj");
b1.setCurrentBal(2300000);
b1.setInterestRate(200);



//parameterized constructor value
BankAccount b2 =  new BankAccount(101,"hello",34000,5000);
b2.display();

b1.display();
System.out.println(b2);

//hashcode
System.out.println("Hashcode code of b1: "+ b1.hashCode());
System.out.println("Hashcode code of b2: "+ b2.hashCode());
}
}