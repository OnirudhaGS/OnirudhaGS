#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter another number: ");
    scanf("%f",&b);
    printf("Addition is %f\nSubtraction is %f\nMultiplication is %f\nDivision is %f\n",a+b,a-b,a*b,a/b);
}
