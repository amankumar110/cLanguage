void main()
{
    char* stringRev(char*);
    char str[1000];
    gets(str);
    printf("\n%s",stringRev(str));

}
char* stringRev(char *p)
{
    char i,l;
    for(i=0;*(p+i)!='\0';i++)
    {
        i++;
    }
    for(l=0;l<i/2;l++)
    {

        char t=*(p+l);
        *(p+l) = *(p+i-1-l);
        *(p+i-1-l) = t;
    }
    *(p+i) = '\0';
    return(p);
}


