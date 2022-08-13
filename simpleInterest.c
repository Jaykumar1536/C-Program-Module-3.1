#include <stdio.h>
void main(){
    //find Simple Interest Calculator
    float p,t,r,tAmount;
    printf("Enter Principal Amount Value is: ");
    scanf("%f",&p);
    printf("\nEnter Interest Value is: ");
    scanf("%f",&r);
    printf("\nEnter Time Period is(Year): ");
    scanf("%f",&t);
    printf("\nYour Total Interest is: %f",(p*t*r)/100);
    tAmount = ((p*t*r)/100)+p;
    printf("\nYour Total Amout is: %f",tAmount);
}