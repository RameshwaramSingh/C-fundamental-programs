#include<stdio.h>
struct booking{
	char name[20];
	int age, seat;
	int Class;
}pass[10];
int main(){
	int n,i;
	printf("Enter 1 for Bussiness class \nEnter 2 for Economy class\n");
	printf("Enter the number of passenger \n");
	scanf("%d",&n);
	for(i =0; i<n; i++){
		printf("Enter the detail of passenger number %d\n",i+1);
		printf("Enter the name of the passenger \n");
		scanf("%s",pass[i].name);
		printf("Enter the age of the passenger\n");
		scanf("%d",&pass[i].age);
		printf("Enter the seat number of the passenger\n");
		scanf("%d",&pass[i].seat);\
		printf("Select the class \n");
		scanf("%d",&pass[i].Class);
	}
	printf("Details of economy Class: \n");
	for(i =0 ; i<n; i++){
		if(pass[i].Class==2){
			printf("Name: %s\n",pass[i].name);
			printf("Age: %d\n",pass[i].age);
			printf("Seat no: %d\n",pass[i].seat);
		}
	}
	printf("Total number of passenger: %d",n);
	return 0;
}
