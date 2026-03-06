# include<stdio.h>
int square(int *p){
    return *p * *p;
}

int main(){
    int x = 10;
  int sq = square(&x);
    printf("sqaure of %d is %d",x, sq);
}