#include <stdio.h>

int main()
{
    int a = 20, *p;
    p = &a;

    printf("Value of a  is: %d\n",a);
    printf("Address of a is: %u\n",&a);
    printf("Address of a using p is: %d\n",p);
    printf("Address of p is: %u\n",&p);
    printf("Value of a using p is: %d\n",*p);
}