// Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

int main(){
    float num1, area,circumference;
    float pi=3.14;

    printf("enter the radius");

    scanf("%f%f",&num1,&num1);

    area=pi*num1*num1;

    circumference=2*pi*num1;

    printf("%f\n",area);
    printf("%f\n",circumference);

    return 0;







}