#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the size of sides of triangle, To know the type of triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && a==c){
		printf("This is a Equilateral Triangle");
	}
	else if(a==b||a==c||b==c){
		printf("This is a Isoceles triangle");
	}
	else{
		printf("This is a scalene triangle");
	}
	return 0;
}
