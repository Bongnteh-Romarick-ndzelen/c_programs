#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (n%2 == 0){
		printf("%d is an even number ",n);
	}
	else {
		printf("%d is not an even number ",n);
	}
	return 0;
		
}
