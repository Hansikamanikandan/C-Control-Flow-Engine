#include<stdio.h>

int main()
{
    int u,b;

    printf("Enter units: ");
    scanf("%d",&u);

    if(u>0 && u<=100)
        b=0;
    else if(u<=200)
        b=(u-100)*5;
    else if(u>200)
        b=(u-200)*10+(100*5);
    else
        printf("Invalid input");

    printf("Amount is: %d",b);
    return 0;
}
