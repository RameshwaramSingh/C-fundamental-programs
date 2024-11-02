#include<stdio.h>

int main(){
    int num;
    printf("Enter the number to check whether it is prime or not ");
    scanf("%d",&num);
    int flag = 1;
    if(num==0 || num==1){
        flag = 0;
    }
    for(int i = 2; i<=num/2; ++i){
        if(num%i==0){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("%d is prime number ",num);
    }
    else{
        printf("%d is not a prime number ",num);
    }
    return 0;
}