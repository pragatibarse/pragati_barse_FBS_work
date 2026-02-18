# include <stdio.h>
int  main() {
    int num ,temp, rev = 0, rem;

    printf("Enter the number:");
    scanf("%d",&num);

     temp = num;

    while(num > 0){
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
    }

    if( temp == rev){
        printf("given num %d is palindrome", rev);
    }
    else{
        printf("given num %d is not palindrome", rev);
    }

}