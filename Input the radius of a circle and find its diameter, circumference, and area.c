#include<stdio.h>
#include<math.h>
#define Pi 3.1416
int main()
{
    float r;
    printf("Enter radius of the circle: ");
    scanf("%f",&r);
    printf("Diameter of the circle = %f\nCircumference of the circle = %f\nArea of the circle= %f\n",2*r,2*Pi*r,Pi*pow(r, 2));
}
