#include<stdio.h>
// simple calculator for two numbers operation
int main(){
    int a,b,c;
    char op;
    printf("Enter the operator \n");
    scanf("%c",&op);
    printf("Enter the first number \n ");
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);
    switch(op){
        case '+': printf("%d + %d = %d",a,b,c=a+b);
        break;
        case '-': printf("%d - %d = %d ",a,b,c=a-b);
        break;
        case '*': printf("%d * %d = %d",a,b,c=a*b);
        break;
        case '/': printf("%d/%d = %d",a,b,c=a/b);
        break;
        default : printf("Enter the valid operator");
    }
    return 0;
}