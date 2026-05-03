#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if((num%5==0)&&(num%2!=0))
        printf("Divisible by 5 and Odd\n");
    else if((num%5==0)&&(num%2==0))
        printf("Divisible by 5 and Even\n");
    else if((num%5!=0)&&(num%2==0))
        printf("Not divisible by 5 but Even\n");
    else
        printf("Not divisible by 5 and Odd\n");

    printf("End");
    return 0;
}
