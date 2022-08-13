#define pi 3.14
#include <stdio.h>
void main(){
    //Area of Circle
    float x,xCir;
    printf("Enter Redius Value Of Circle: ");
    scanf("%f",&x);
    xCir = pi*x*x;
    printf("\nArea Of Circle: %f",xCir);

    //Area Of Rectangle
    float w,l,aRect;
    printf("\nEnter Length Value Of Rectangle: ");
    scanf("%f",&l);
    printf("\nEnter Width Value of Rectangle: ");
    scanf("%f",&w);
    aRect = w*l;
    printf("\nArea Of Rectangle: %f",aRect);

    //Area of Triangle
    float b,h,aTri;
    printf("\nEnter Base Value of Triangle: ");
    scanf("%f",&b);
    printf("\nEnter Height Value of Triangle: ");
    scanf("%f",&h);
    aTri = (b*h)/2;
    printf("\nArea Of Triangle: %f",aTri);
}