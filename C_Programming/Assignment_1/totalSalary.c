#include<stdio.h>
int main() {
  int  basic = 8000;
  int da, ta,hra;
  float total;

  if(basic <= 5000)
  {
    da = basic * 10/100;
    ta = basic * 20/100;
    hra = basic *  25 /100;
    total = basic + da + ta + hra;
  }
  else{
    da = basic * 15/ 100 ;
    ta = basic * 25/100;
    hra = basic * 30 /100 ;
    total = basic + da + ta + hra;
  }
printf("the basic is %d,so Total Salary of %f is",basic,total);
}