#include<stdio.h>
int main()
{
    double a=65.5453132155656555;
    double b=88.4565553333984984;
    double c=93.4564220035585325;
    double sum=a+b+c;
    double sub=a-b-c;
    double mul=a*b*c;
    double div=a/b/c;
    printf("Sum is %lf \nSub is %lf \nMul is %.4lf\nDiv is %.9lf",sum,sub,mul,div);
}
