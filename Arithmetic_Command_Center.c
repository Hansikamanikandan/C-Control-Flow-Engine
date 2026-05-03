#include<stdio.h>

int main()
{
    int choice,a,b,c;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    switch(choice)
    {
        case 1: printf("Addition: %d",a+b); break;
        case 2: printf("Subtraction: %d",a-b); break;
        case 3: printf("Multiplication: %d",a*b); break;
        case 4:
            if(b!=0) printf("Division: %d",a/b);
            else printf("Division by zero not allowed");
            break;
        case 5:
            if(b!=0) printf("Modulus: %d",a%b);
            else printf("Modulo by zero not allowed");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
