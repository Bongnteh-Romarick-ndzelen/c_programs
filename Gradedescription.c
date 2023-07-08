#include<stdio.h>
int main(){
    char name[50];
    float marks;
    printf("Enter your name\n");
    scanf("%s", &name);
    printf("Enter your marks\n");
    scanf("%f", &marks);
    //checking if you have pass or not
    if(marks>=80){
        printf("%s, congratulations\nYou have A Grade", name);
    }
    else if(marks>=65){
        printf("%s, congratulations\nYou have B Grade", name);
    }
    else if(marks>=50){
        printf("%s, congratulations\nYou have C Grade", name);
    }
    else{
        printf("%s, You have D Grade. Below Average, Repeat!", name);
    }
    return 0;
}