#include<stdio.h>
int main(){
    int num,rem,ans=0;
    printf("Enter the number you want to reverse \n");
    scanf("%d",&num);
    while(num>0){
        rem = num%10;
        ans = ans*10 + rem;
        num = num/10;
    }
    printf("Reversed number = %d",ans);
    return 0;
}