#include<stdio.h>
int main(){
	struct student{
		char name[20];
		int roll;
		int marks;
	}stu[3];
	int i,j;
	for(i = 0; i<3; i++){
		printf("Enter the name of Student %d \n ",i+1);
		scanf("%s",stu[i].name);
		printf("Enter the roll no of Student %d\n",i+1);
		scanf("%d",&stu[i].roll);
		printf("Enter the marks of Student %d \n",i+1);
		scanf("%d",&stu[i].marks);
	}
	printf("Student Details: \n");
	for(j = 0; j<3; j++){
		printf("Name of student no %d : %s\n",j+1,stu[j].name);
		printf("Roll no of student no %d : %d\n",j+1,stu[j].roll);
		printf("Marks of student no %d : %d\n",j+1,stu[j].marks);
	}
	return 0;
}
