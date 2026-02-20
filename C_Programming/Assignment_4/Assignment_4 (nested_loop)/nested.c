# include <stdio.h>
int main() {

    char str[30];
    int i,count;

    printf("Enter String: ");
    scanf("%s",str);

    int len = strlen(str);

    for(i = 0;i< len; i++){
        count =1;

        while(i < len - 1 && str[i] == str[i+1]){
            count ++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
}