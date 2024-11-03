#include <stdio.h>
int main()
{
    char op;
    int unit;
    float engCost;
    printf("Slect the option which type of ring you want to engrave\n Select option : A for GOld plated ring\n Select option : B for Solid gold ring\n Select option : C for Silver plated ring\n");
    scanf("%c", &op);
        switch (op)
        {
        case 'a':
        case 'A': 
            printf("Enter how much unit you want to engrave \n");
            scanf("%d", &unit);
            engCost = 500 + (unit * 70.30);
            break;
        case 'b':
        case 'B':
            printf("Enter how much unit you want to engrave \n");
            scanf("%d", &unit);
            engCost = 1000 + (unit * 10.40);
            break;
        case 'c':
        case 'C':
            printf("Enter how much unit you want to engrave \n");
            scanf("%d", &unit);
            engCost = 300 + (unit * 5.10);
            break;
        default :
            printf("Choose the valid option");    
        }
    printf("Total Engraving cost = %0.2f ", engCost);
    return 0;
}