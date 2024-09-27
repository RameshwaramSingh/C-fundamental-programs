#include<stdio.h>
int main(){
	int i;
	float f;
	double d;
	printf("Size of integer %u bytes \n", sizeof(int));
	printf("Enter the value in integer \n");
	scanf("%d",&i);
	printf("Enter the value in float \n");
	scanf("%f",&f);
	printf("Enter the value in double \n");
	scanf("%d",&d);
	printf("Size of integer %u ",sizeof(i));
	return 0;
}
