# include <stdio.h>
int reverse(int *p){
int last = *p %10;
int first = *p /10;
*p = last *10 + first;

}

int main(){
    int x = 56;
  int rev= reverse(&x);
  printf("reverse number is %d",x);
}