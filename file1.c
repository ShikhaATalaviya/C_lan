#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("abc.txt","w+");     // writing mode
    // fp = fopen("abc.txt","a+");  // append mode
    fprintf(fp, "You are learning C language now....\n");
    fputs("End of C language today...\n", fp);
    fputs("Welcome to SkillQode-Decode  your Skill\n", fp);
    fclose(fp);
}