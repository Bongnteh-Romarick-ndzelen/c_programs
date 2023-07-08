#include<stdio.h>
int main(){
    char name[50];
    float marks;
    //char name[50] = "Romarick";
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Enter your score\n");
    scanf("%f",&marks);
    printf("Your score is %2f",marks);
    printf("\nGood Morning %s\nYou're welcome to our application",name);
    return 0;
}

