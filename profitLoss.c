#include<stdio.h>
int main(){
    int cp,sp,loss,profit;
    printf("Enter the cost price of the product \n");
    scanf("%d",&cp);
    printf("Enter the selling price of the product \n");
    scanf("%d",&sp);
    if(sp == cp){
        printf("No Profit or Loss \n");
    }
    else if(sp>cp){
        profit = sp-cp;
        printf("Profit on the Product = %d",profit);
    }
    else{
        loss = cp-sp;
        printf("Loss on the product = %d",loss);
    }
    return 0;
}