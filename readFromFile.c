#include<stdio.h>
char filename[]="myfile.txt";
void printInfo()
{
    FILE *ptr = fopen(filename,"rb");
    if(ptr == NULL)
        printf("No information to show");
    else{
        char name[50];
        fread(&name,sizeof(name),1,ptr);
        int yob;
        fread(&yob,sizeof(yob),1,ptr);
        printf("%s - %d",name,yob);
    }
}
void scanInfo()
{
    FILE *ptr = fopen(filename,"ab");
    char name[50];
    gets(name);
    int dob;
    scanf("%d",&dob);
    fwrite(&name,sizeof(name),1,ptr);
    fwrite(&dob,sizeof(int),1,ptr);
    printf("\nsuccess");
}
void main()
{
    printInfo();
}
