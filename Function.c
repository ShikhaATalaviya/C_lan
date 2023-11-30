/*
    Function -> specific task perform

    Argument    Return
   1 No          No
   2 No          with
   3 with        no
   4 with        with
*/
// WAWR
#include <stdio.h>
int Product(int x, int y)
{
   printf("Product of a and b is: %d", x * y);
}


int main()
{
    int a,b, m;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
     Product(a,b);
    // printf("Product of a and b is: %d",m);
    // printf("Product of a and b is: %d",Product(a,b));
    // LargestNo(100, 20);
}