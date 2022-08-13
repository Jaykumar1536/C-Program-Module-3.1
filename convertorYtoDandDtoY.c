#include <stdio.h>
void main(){
    // Convert Year to Days
    float year,day;
    printf("Enter Year: ");
    scanf("%f",&year);
    printf("\nConvert To Year to Days: %f",year*365);

    //Convert Day to Year
    printf("\nEnter Days: ");
    scanf("%f",&day);
    printf("\nConvert Day to Year: %f",day/365);
}