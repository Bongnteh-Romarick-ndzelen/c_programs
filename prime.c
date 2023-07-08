#include<stdio.h>
int main(){
    int n, i, c=0;
    printf("Enter any Number to check whether it's prime or not\n");
    scanf("%d",&n);
    //c signifies the number of factors
    for(i=1; i<=n; i++){
        if(n%i == 0){
            c += 1;
        }
    }
    if (c == 2){
        printf("\n%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number", n);
    }
}