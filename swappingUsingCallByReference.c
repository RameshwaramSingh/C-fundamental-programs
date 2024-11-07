//swap using call by reference
#include<stdio.h>
int swap(int*, int*);
int main(){
	int a = 10,b= 5;
	swap(&a,&b);
	printf("After swapping the vlaue a = %d and b = %d",a,b);
	return 0;
}
int swap(int*a ,int*b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return 0;
}
