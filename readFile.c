#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("file.txt","r");
    char ch=fgetc(ptr);
    while(!feof(ptr))
    {
        printf("%c",ch);
        ch=fgetc(ptr);
    }
    fclose(ptr);
}
