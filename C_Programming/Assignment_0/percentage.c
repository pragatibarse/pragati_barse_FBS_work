#include<stdio.h>
void main() {
    int sub1 = 70;
    int sub2 = 60;
    int sub3 = 40;
    int sub4 = 80;
    int sub5 = 90;
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = (total / 500.0 ) * 100;
    printf("Total of 5 subject is %d and percentage is %f",total, percentage);
}