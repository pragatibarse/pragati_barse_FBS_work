#include<stdio.h>
void main(){
    int time ,hour,min;
    time = 125;
    hour = time/60;
    min = time % 60;
    printf("%d minutes = %d hour %d min",time,hour,min);
}