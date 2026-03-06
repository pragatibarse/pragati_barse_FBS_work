//find max number
# include<stdio.h>
int max_num(int *a, int *b){
    if(*a > *b) return *a;
    else return *b;
}
int main(){
    int x = 20;
    int y = 40;
   int maxi_num = max_num(&x, &y);
   printf("%d",maxi_num);
}