#include<stdio.h>
int main()
{
    int i;
    printf("Enter a Int: ");
    scanf("%d", &i);
    printf("The int is:%d\n",i);

    char c;
    printf("Enter a Character: ");
    scanf(" %c", &c);
    printf("The character is:%c\n",c);

    float f;
    printf("Enter a Float: ");
    scanf("%f", &f);
    printf("The float is:%f\n",f);

    double d;
    printf("Enter a Double: ");
    scanf("%lf", &d);
    printf("The double is:%lf\n",d);
    }
