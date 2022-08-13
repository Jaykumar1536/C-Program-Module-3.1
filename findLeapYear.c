#include <stdio.h>
void main(){
    //find This year is leap year or Not;
    int x;
    printf("Enter Year: ");
    scanf("%d",&x);
    if(x%4==0){
        printf("This Year is Leap Year");
    }else{
        printf("This Year is not Leap Year");
    }
}