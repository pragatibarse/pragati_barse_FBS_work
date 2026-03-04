#include <stdio.h>

char* getResult() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks > 75) return "Distinction";
    else if(marks > 65) return "First Class";
    else if(marks > 55) return "Second Class";
    else if(marks >= 40) return "Pass Class";
    else return "Fail";
}

int main() {
    printf("Result = %s\n", getResult());
    return 0;
}