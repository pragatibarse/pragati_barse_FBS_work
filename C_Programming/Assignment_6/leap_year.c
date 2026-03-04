# include<stdio.h>

int leap(){
    int year = 2026;
    if(year % 4 == 0)printf("the given year is leap year");
    else printf ("the given year is not leap year");
}
int main(){
leap();
}