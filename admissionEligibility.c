# include<stdio.h>
int main(){
    int ph,m,chem,total,phMath;
    printf("Enter the number obtain in physics \n ");
    scanf("%d",&ph);
    printf("Enter the number obtain in chemistry \n ");
    scanf("%d",&chem);
    printf("Enter the number obtain in math \n ");
    scanf("%d",&m);
    total = ph + chem + m;
    phMath = ph + m;
    if(m>=65 && ph>= 55 && chem>= 50 && total>=180 || phMath >= 130){
        printf("Congratulation!! you are elligible for admission");
    }
    else{
        printf("Sorry you are not elligibe for admission");
    }
    return 0;
}