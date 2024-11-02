#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number\n");
    scanf("%d",&num);
   (num%2 == 0) ? printf("%d is Even number ",num) : printf("%d is odd number ",num);
    return 0;
}