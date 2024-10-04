#include<stdio.h>
int main(){
	int num;
	printf("Enter the number to check whether it is positive or negative \n");
	scanf("%d",&num);
	if(num==0){
		printf("%d number is neither negative nor positive",num);
	}
	else if(num>0){
		printf("%d number is positive",num);
	}
	else{
		printf("%d number is negative",num);
	}
}
