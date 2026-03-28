// Develop a program to manage a music library. Define a structure to

// store song details (song ID, title, artist, and duration). Create a menu-
// driven program to add new songs and display the song library. Use

// functions to handle these operations.


#include<stdio.h>
#include<string.h>
# define MAX 30
struct Music{
     int id;
     char title[30];
     char artists[30];
     float duration;
};

struct Music music[MAX];
int count = 0;

//add new music function

void addMusic(){

  printf("Enter Music id: ");
  scanf("%d",&music[count].id);

  printf("Enter Music tile:");
  scanf(" %[^\n]",music[count].title);

  printf("Enter Music Artists:");
  scanf(" %[^\n]",music[count].artists);

  printf("Enter Music Duration:");
  scanf(" %f",&music[count].duration);

  count++;
  printf("-----------song added----------\n");
}


//display
void displayMusic(){
    int i;
    printf("---All music Lists----");

    for(i = 0; i < count;i++){
        printf("\nId: %d", music[i].id);
        printf("\nTitle: %s",music[i].title);
        printf("\nArtists: %s",music[i].artists);
        printf("\nDuration: %s",music[i].duration);


    }
}


//main
int main(){
int choice, i;

while(1){
    printf(" \n----- Music Libarbary-----\n");
    printf("1. Add song\n");
    printf("2. Display song\n");
    printf("0. Exit\n");
    printf("-------------------\n");

    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1: addMusic();
        break;
         case 2: displayMusic();
         break;
         case 0:printf("GoodBye.."); 
        break;
        default:
        printf("Invalid invalid choice");
    }

}
}
