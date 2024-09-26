# include<stdio.h>
# include<conio.h>
int main(){
    int cus_id;
    char name[32];
    float unit;
    float charge;
    printf("Enter the customer id \n");
    scanf("%d", &cus_id);
    printf("Enter the name of the customer \n");
    scanf("%s", &name);
    printf("Enter Unit use by customer \n");
    scanf("%f",&unit);
    if(unit<=199){
        charge = 1.20*unit;
    }
    else if(unit>=200 && unit<400){
        charge = 1.50*unit;
    }
    else if (unit>=400 && unit<600){
        charge = 1.80*unit;
    }
    else{
        charge = 2 * unit;
    }
    if(charge < 100){
        printf("you have to pay 100 rupees minimum amount of electricity bill");
    }
    else if(charge > 400){
        charge = (0.15 * charge) + charge;
        printf("You have to pay %0.2f rupees ",charge);
    }
    else{
        printf("you have to pay %0.2f rupees", charge);
    }
    return 0;
}