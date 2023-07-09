void decreament(){
int x=4,y;
x--;
printf("%d",x);
 /*y= --x; --X WILL BE EVALUATED FIRST BECAUSE OF HIGHER PRIORITY SO THE VALUE OF Y WILL BE 2  */
  y= x--; // Y=X WILL BE EVALUATED FIRST SO THE VALUE OF Y WILL BE 3
printf("\n%d %d",x,y);
};
void increament(){
int x=4,y;
x++;
printf("%d",x);
 /*y= ++x; ++X WILL BE EVALUATED FIRST BECAUSE OF HIGHER PRIORITY SO THE VALUE OF Y WILL BE 6  */
y= x++; // Y=X WILL BE EVALUATED FIRST SO THE VALUE OF Y WILL BE 5
printf("\n%d %d",x,y);
}

void main (){
int constant,variable,datatype,x=1;
variable= sizeof(x);
constant = sizeof(1);
datatype= sizeof(int);

printf("%d %d %d",variable,constant,datatype);
}

