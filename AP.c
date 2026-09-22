// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
float num1,num2,area,perimeter;

printf("enter the units");
scanf("%f%f",&num1,&num2);

area=num1*num2;
perimeter=2*(num1+num2);

printf("area= %f \n",area);
printf("perimeter= %f \n",perimeter);

return 0;





}