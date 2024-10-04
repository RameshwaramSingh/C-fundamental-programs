#include<stdio.h>
int main(){
	int temp;
	printf("Enter the temperature \n");
	scanf("%d",&temp);
	if(temp<0){
		printf("Freezing Whether!! \n");
	}
	else if(temp>0 && temp<10){
		printf("Very Cold!! \n");
	}
	else if(temp>10 && temp<20){
		printf(" Cold!! \n");
	}
	else if(temp>20 && temp<30){
		printf("Normal Whether \n");
	}
	else if(temp>30 && temp<40){
		printf("Hot Whether!! \n");
	}
	else{
		printf("Very Hot Whether!! \n");
	}
	return 0;
}
