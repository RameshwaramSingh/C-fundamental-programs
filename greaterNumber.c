# include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number you want to compare \n");
    printf("Enter the first number \n");
        scanf("%d",&a);
        printf("Enter the second number \n");
        scanf("%d",&b);
        printf("Enter the third number \n");
        scanf("%d",&c);
        if(a == b && b== c){
            printf(" all numbers are equal");
        }
        else if(a>b && a>c){
            printf("%d is greater among three number",a);
        }
        else if(b>c){
                printf("%d is greater among three number",b);
            }
            else
            printf("%d is greater among three number",c);   
            return 0;     
}