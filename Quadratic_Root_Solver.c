#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,x1,x2,d;

    printf("Enter a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);

    d=b*b-4*a*c;

    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Real roots: %f %f",x1,x2);
    }
    else if(d==0)
    {
        x1=-b/(2*a);
        printf("Equal roots: %f",x1);
    }
    else
        printf("Imaginary roots");

    return 0;
}
