#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a,&b,&c);
    //checking the greatest number
    if(a>b && a>c){
        printf("%d is gratest", a);
    }
    else if(b>a && b>c){
        printf("%d is gratest", b);
    }
    else{
        printf("%d is gratest", c);
    }
    return 0;
}