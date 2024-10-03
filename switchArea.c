#include<stdio.h>
int main(){
    int choice;
    float area,r;
    int a,b,l;
    printf("Enter the choice to find the area \n 1 for area of square \n 2 for area of rectangle \n 3 for area of circle \n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Enter the size of the square \n");
        scanf("%d",&a);
        area = a*a;
        printf("Area of the square = %0.2f",area);
        break;
        case 2: printf("Enter the length and breadth of the rectangle \n");
        scanf("%d %d",&l,&b);
        area = l*b;
        printf("Area of the rectangle = %0.2f",area);
        break;
        case 3: printf("Enter the radius of the circle \n");
        scanf("%f",&r);
        area = 3.14*r*r;
        printf("Area of the circle = %0.2f",area);
        break;
        default: printf("Invalid Input!! \n Enter the correct valur b/w 1 to 3");
    }
    return 0;
}