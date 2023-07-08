#include<stdio.h>
int main(){
    int n;
    printf("Enter the range to print even numbers: ");
    scanf("%d",&n);
    //Used for loop to print even numbers
    for(int i=1; i<=n; i++){
        if (i%2 == 0){
            printf("%d,",i);
        }
    }
    return 0;
}