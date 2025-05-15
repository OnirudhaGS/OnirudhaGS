#include<stdio.h>
#include<math.h>
int main()
{
    float base,exponent;
    printf("Enter base:");
    scanf("%f",&base);
    printf("Enter exponent:");
    scanf("%f",&exponent);
    printf("Result= %f",pow(base,exponent));
}
