#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Input mark of 1st sub: ");
    scanf("%f",&a);
    printf("Input mark of 2nd sub: ");
    scanf("%f",&b);
    printf("Input mark of 3rd sub: ");
    scanf("%f",&c);
    printf("Input mark of 4th sub: ");
    scanf("%f",&d);
    printf("Input mark of 5th sub: ");
    scanf("%f",&e);
    printf("Total marks: %f\nAverage: %f",(a+b+c+d+e),(a+b+c+d+e)/5);
}
