#include<stdio.h>
#include<math.h>
int main(){
	//this program is of compound interest
	float p,r,amount,ci;
	int t,n;
	printf(" enter the principal amount \n");
	scanf("%f",&p);
	printf("Enter the rate of interest \n");
	scanf("%f",&r);
	printf("Enter the time in years\n");
	scanf("%d",&t);
	amount =p*((pow((1+r/100),t)));
	ci = amount-p;
	printf("compound interest of principal amount is %0.2f ",ci);
	return 0;
}
