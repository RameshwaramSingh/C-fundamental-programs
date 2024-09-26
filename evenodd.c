#include<stdio.h>
int main(){
    int a;
    printf("Enter the value to check whether it is even or odd ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("%d is even number \n",a);
    }
    else{
        printf("%d is odd number", a);
    }
    return 0;
}