#include <stdio.h>

int calculate(int a, int b, char op) {
    if(op == '+') return a + b;
    else if(op == '-') return a - b;
    else if(op == '*') return a * b;
    else if(op == '/') return b != 0 ? a / b : 0;
    else if(op == '%') return b != 0 ? a % b : 0;
    else return 0;
}

int main() {
    int x, y;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Enter operator (+,-,*,/,%): ");
    scanf(" %c", &op);
    printf("Result = %d\n", calculate(x, y, op));
    return 0;
}