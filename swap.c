#include<stdio.h>
// using three variable
    /*int main(){
       int a,b,temp;
        printf("Enter the value you want to swap \n");
        printf("Enter the first value \n");
        scanf("%d",&a);
        printf("Enter the second value \n");
        scanf("%d",&b);
        temp = a;
        a = b;
        b = temp;
        printf("After swapping the vlaue a = %d and b = %d ",a,b);
        return 0;
    }*/

//WITHOUT USING THIRD VARIABLE

   int main (){
    int a,b;
    printf("Enter the value you want to swap \n");
        printf("Enter the first value \n");
        scanf("%d",&a);
        printf("Enter the second value \n");
        scanf("%d",&b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf("After swapping the vlaue a = %d and b = %d ",a,b);
        return 0;
   }