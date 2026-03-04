// type 1- no return no arg

// # include <stdio.h>
// void palindome(){
   
//     int num = 121;
//     int temp = num;

//     int a = num % 10;//1
//     int b = (num/10) % 10; //2
//     int c = num % 10;

//     int res = a*100 + b* 10 + a;

//     if(res == temp){
//         printf("palindrome");
//     }
//     else{
//         printf("not palindome");
//     }
// }
 
// int main(){
// palindome();
// return 0;
// }


//type 2 = with arg no return
// # include<stdio.h>
//  void palindome(int num){
//    ;
//     int temp = num;
//     int a = num % 10;
//     int b = (num /10 )%10;
//     int c = num % 10;

//     int rev = a* 100 + b * 10 + a;
//     if(rev == temp){
//         printf("palindrome");
//     }
//     else printf("not palindome");

// }

// int main(){
//     palindome(432);
//     return 0;
// }

//type 3 = with return no arg
# include <stdio.h>
int palindrome(){
    int num = 121;
    int temp = num;
    int a = num % 10;
    int b = (num/10)%10;
    int c = num % 10;
    
    int rev = a * 100 + b* 10 + c;
    return rev;
    if (rev == temp)
     return 1;
    else 
    return 0;
}
int main(){
    int res =  palindrome();
    if (res == 1){
        printf("palindrome");
    }
    else{
        printf("not palindome");
    }
   
}