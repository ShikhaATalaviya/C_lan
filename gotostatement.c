/*
goto statement
*/
#include <stdio.h>

int main()
{
    int a = 1;
    test:
        if(a<=10){
            printf("%d ",a++);
            goto test;
        }    
}