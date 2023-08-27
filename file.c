#include<stdio.h>
struct book{
int id;
char name[200];
float price;
};
void writeData(char filename[])
{
    FILE *ptr;
    ptr=fopen(filename,"ab");
    struct book b1 = {1,"Hogwarts",3.29};
    fwrite(&b1,sizeof(b1),1,ptr);
    fclose(ptr);
}
void readData(char filename[])
{
    FILE *ptr;
    struct book b2;
    ptr=fopen(filename,"w");
    fread(&b2,sizeof(b2),1,ptr);
    printf("%d %s %f",b2.id,b2.name,b2.price);
}
void main()
{
    void writeData(char[]);
    void readData(char[]);
    writeData("file3.txt");
    readData("file3.txt");
}
