//increment by 1
# include<stdio.h>
void increment(int *p){
++*p;
}
int main(){
int a = 20;
increment(&a);
printf("%d",a);
}