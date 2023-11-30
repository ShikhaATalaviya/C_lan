#include <stdio.h>

int main()
{
    int a,b,ch;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Addition of a and b is: %d", a+ b);
        break;
    case 2:
        printf("Substraction of a and b is: %d", a- b);
        break;
    case 3:
        printf("Multiplication of a and b is: %d", a* b);
        break;
    case 4:
        printf("Division of a and b is: %d", a/ b);
        break;
    
    default:
        printf("Wrong  input......");
        break;
    }
}