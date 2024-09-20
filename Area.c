//program to add two number 
#include <stdio.h>
int main(){
	int a = 10;
	int b = 5;
	int c = 2;
	printf("Area of Square %d \n", a*a);
	printf("Perimeter of Square %d \n", 4*a);
	printf("Area of rectangle %d \n", a*b);
	printf("Perimeter of Rectangle %d \n", 2*(a+b));
	printf("Perimeter of Triangle %d \n", a+b+c);
	float triangleArea = 0.5*a*b;
	printf("Area of Triangle %f \n", triangleArea);
}
