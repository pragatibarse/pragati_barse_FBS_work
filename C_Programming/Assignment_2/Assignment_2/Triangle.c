# include <stdio.h>

int main () {
    int a, b, c;

    printf("Enter three sides of Trianle: ");
    scanf("%d %d %d",&a, &b, &c);

    if( a == b && a == c && b == c){
        printf("All three sides are equal - Equilateral");
    }
    else if (a == b || a == c || b == c)
    {
        printf("any two sides are equal - Isosceles");
    }
    else{
            printf("All side different - Scalene");
    
    }
}