#include <stdio.h>

int main() {
    int choice, num, temp, digit, sum = 0, rev = 0, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:   // Even or Odd
            if (num % 2 == 0)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        case 2:   // Prime or Not
            if (num <= 1) {
                printf("Number is not Prime");
                break;
            }
            flag = 1;
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                printf("Number is Prime");
            else
                printf("Number is not Prime");
            break;

        case 3:   // Palindrome
            temp = num;
            rev = 0;
            while (temp > 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            if (rev == num)
                printf("Number is Palindrome");
            else
                printf("Number is not Palindrome");
            break;

        case 4:   // Positive, Negative or Zero
            if (num > 0)
                printf("Number is Positive");
            else if (num < 0)
                printf("Number is Negative");
            else
                printf("Number is Zero");
            break;

        case 5:   // Reverse number
            temp = num;
            rev = 0;
            while (temp != 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            printf("Reverse of number = %d", rev);
            break;

        case 6:   // Sum of digits
            temp = num;
            sum = 0;
            while (temp != 0) {
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}