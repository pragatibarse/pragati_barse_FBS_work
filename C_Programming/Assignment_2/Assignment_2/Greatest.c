# include <stdio.h>
int main () {
    int a , b , c ;

    printf ("Enter the Three Number :" );
    scanf("%d %d %d", &a, &b, &c);

    if ( a > b && a > c)
    printf(" number %d is greatest", a);

    else if (b > c && b > a)
    printf("number %d is greatest", b);
    
    else if (a == b && b == c)
    printf("All numbers are same");
    
    else{
          printf("number %d is greatest", c);
  
    }
    
}