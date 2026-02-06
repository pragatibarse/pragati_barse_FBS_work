#include<stdio.h>
int main() {
    int year = 1900;
    if((year % 400== 0) ||(year % 4 == 0 && year % 100 != 0)){
        printf("%d  year is leap year",year);
    }
    else{
        printf("%d year is not leap year",year);
    }
}