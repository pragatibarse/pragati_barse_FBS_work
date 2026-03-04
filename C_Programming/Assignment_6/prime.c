//check prime or not

# include<stdio.h>
int prime(int n){
 
    if (n <= 1) return 0;

    for (int i = 2; i < n; i++){
        if( n % i == 0)
        return 0; 
        
    }
    return 1;
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    if(prime(num))printf("prime");
    else printf("not prime");
}