#include<stdio.h>
int main()
{
    char buff[150];
    FILE *fp;
    fp = fopen("abc.txt","r");

    while(fscanf(fp,"%s", buff) != EOF){
        printf("%s ",buff);
    }
    fclose(fp);
}