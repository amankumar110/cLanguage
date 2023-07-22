// Functions are operations which combine to form a program
// One great advantage of functions is that they provide flexibility and modularity to the code
// There are four types of functions
/*
1. TAKES NOTHING RETURNS NOTHING(TNRN)
2. TAKES SOMETHING RETURNS NOTHING(TSRN)
3. TAKES NOTHINFG RETURNS SOMETHING(TNRS)
4. TAKES SOMETHING RETURNS SOMETHING(TSRS)
*/
// One important step is that if a function is not returning anything we need a define it using void datatype
// If it is meant to return something then we define it using the returning datatype
//TNRN
void Multiply()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d",a*b);
}
// TSRN
void add(int number1,int number2){
   printf("\n%d",number1+number2);
}

//TNRS
int subtract()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return a-b;
}

//TSRS
int divide(int a,int b)
{
    return a/b;
}
void main()
{
    void Multiply(void);
    void add(int,int);
    int subtract(void);
    int divide(int,int);
    Multiply();
    add(400,1);
    printf("\nEnter two numbers : ");
    int answer = subtract();
    printf("%d",answer);
    printf("\nEnter two numbers : ");
    int x,y,ans2;
    scanf("%d%d",&x,&y);
    ans2= divide(x,y);
    printf("%d",ans2);

}
