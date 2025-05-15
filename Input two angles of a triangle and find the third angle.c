#include<stdio.h>
int main()
{
    float a,b;
    printf("Input a angle: ");
    scanf("%f",&a);
    printf("Input another angle: ");
    scanf("%f",&b);
    printf("Third angle is: %f",180-a-b);
}

