// #include <stdio.h>

// void swap(int a, int b){
//     printf("Inside swap function:\n");
//     printf("Address of a = %p\n", (void*)&a);
//     printf("Address of b = %p\n", (void*)&b);
    
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//     int x = 10, y = 20;
//     printf("Before swap in main:\n");
//     printf("Address of x = %p\n", (void*)&x);
//     printf("Address of y = %p\n", (void*)&y);

//     swap(x, y);

//     printf("After swap in main:\n");
//     printf("x = %d, y = %d\n", x, y);
//     return 0;
// }



#include <stdio.h>
void chanageValue(int *p){
 *p =50;
}
int main(){
  int a = 30;
  chanageValue(&a);
  printf("%d\n",a);
  printf("%p",&a);
}