#include<stdio.h>
int main()
{
   float l;
   printf("Enter a lenght in centimeter= ");
   scanf("%f",&l);
   printf("The lenght in meter= %f m\nThe lenght in kilometer= %f km",l/100,l/100000);
}
