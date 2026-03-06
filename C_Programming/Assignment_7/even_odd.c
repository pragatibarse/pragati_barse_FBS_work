#include<stdio.h>
int even_odd(int *p){
 if(*p % 2 == 0) return 1;
 else return 0;
}

int main(){
    int num = 13;
    if(even_odd(&num) == 1)
    printf("even");
    else printf("odd");
}