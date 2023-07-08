#include<stdio.h>
int n;
int main(){
    printf("enter the number n\n");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n,factorial(n));
}
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}