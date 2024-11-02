#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number to find the greatest number\n");
    scanf("%d %d %d",&a,&b,&c);
    (a>b && a>c) ? printf("%d is greatest among three number ",a): 
    (b>c) ? printf("%d is greatest among three number",b):
    printf("%d is greatest among three number",c);
    return 0;
}