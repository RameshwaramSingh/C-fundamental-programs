#include<stdio.h>
int main(){
	char grade;
	printf("Enter the grade \n");
	scanf("%c",&grade);
	switch(grade){
		case 'E': printf("Excellent");
		break;
		case 'V': printf("Very Good");
		break;
		case 'G': printf("Good");
		break;
		case 'A': printf("Average");
		break;
		case 'F': printf("Fail");
		break;
		default: printf("Enter the correct grade");
	}
	return 0;
}
