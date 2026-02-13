# include <stdio.h>

int main () {

    int marks;

    printf("Enter the marks :" );
    scanf("%d", &marks);

    if(marks >= 75 && marks <=99)
    printf(" %d  Distinction", marks);

    else if (marks >= 65 && marks <= 74)
    {
    printf(" %d  First Class", marks);
    }
    else if (marks >= 55 && marks <= 64)
    {
    printf(" %d  Second Class", marks);
    }
    else if (marks >= 40 && marks <= 54)
    {
    printf(" %d  Pass Class", marks);
    }
    else if (marks < 40 )
    {
    printf(" %d  Fail", marks);
    }
    else{
            printf("Invalid marks");

    }
    
    
    
    

}