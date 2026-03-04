# include <stdio.h>

int odd_even(){
int num = 24;
if(num %2 == 0){
    printf("even :%d  ",num);
}
else{
    printf(" odd :%d", num);
}
}

int main(){
odd_even();
}