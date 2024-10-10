#include<stdio.h>
int main(){
int num,rem,ans =0;
 printf("Enter the number you want to add \n");
    scanf("%d",&num);
while(num>0){
    rem = num%10;
    ans = ans + rem;
    num = num/10;
}
printf("Sum of digit = %d",ans);
return 0;
}