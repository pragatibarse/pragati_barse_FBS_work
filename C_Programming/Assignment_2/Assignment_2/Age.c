# include <stdio.h>
int main () {

    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    if(age < 12){
        printf("%d is Child",age);
    }
    else if( age >=12 && age < 19){
        printf("%d  is Teenager",age);
    }
    else if (age >=19 && age <= 59)
    {
        printf("%d  is Adult",age);
    }
   else{
            printf("%d  is Senior ",age);

   }
}