#include<stdio.h>
struct emp{
	char name[20];
	int id,sal,year;
}empDetail[10];
int main(){
	int n,bonus,i;
	printf("Enter the number of employee ");
	scanf("%d",&n);
	for( i =0; i<n;i++){
		printf("Enter the detail of employee number %d:\n",i+1);
		printf("Enter the name of the employee\n ");
		scanf("%s",empDetail[i].name);
		printf("Enter the id of the employee\n");
		scanf("%d",&empDetail[i].id);
		printf("Enter the salary of the employee\n");
		scanf("%d",&empDetail[i].sal);
		printf("Enter the number of year he worked in company\n");
		scanf("%d",&empDetail[i].year);
	}
	printf("Detail of the who got bonus \n \n");
	for(i =0; i<n; i++){
		if(empDetail[i].year>5){
			bonus = (empDetail[i].sal*10)/100;
			empDetail[i].sal = bonus + empDetail[i].sal;
			printf("Name: %s\n",empDetail[i].name);
			printf("Id: %d\n",empDetail[i].id);
			printf("Salary including bonus: %d\n",empDetail[i].sal);
			printf("Annual Bonus: %d\n",bonus);
		}
	}
	return 0;
}
