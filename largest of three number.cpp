#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Enter num1, num2, num3:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1 > num2 && num1 > num3){
		printf("num1 is largest");
	}
	else if(num2 > num3 && num2 > num1 ){
		printf("num2 is latgest");
	}
	else{
		printf("num3 is largest");
	}
	return 0;
}
