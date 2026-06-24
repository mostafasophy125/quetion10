/*
   Write a C program to input the radius of a circle and calculate its circumference and area.

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float radius;
  printf("Enter your num1:");
  scanf("%f",&radius);
  float Circumference=2*3.14*radius;
  float Area=3.14*radius*radius;
  printf("Circumference=%f\n",Circumference);
  printf("Area=%f",Area);


    return 0;
}
