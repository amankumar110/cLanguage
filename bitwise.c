// BITWISE OPERATORS
// SUCH OPERATORS WHICH OPERATE ON THE BITES(0 & 1)
// FOLLOWING ARE THE BITWISE OPERATORS
/*
NOT(~) - Unary as well as bitwise used to perform not operation
AND(&) - Used to perform and operation
OR(|)  - Used to perform or operation
xor(^) - Or but 1 or 1 and 1 evaluates to 0
rightshift(>>) - add zeros on left side
leftshift(<<) - add zeros to right side
*/

void notOperation (){
  int x;
   x = ~3; // perform two's complement on the inverse of the given term
   printf("%d",x);
}
void andOperation(){
int x;
x = 12&13;
printf("%d",x);

/*
12 = 1 1 0 0
13 = 1 1 0 1
&  = 1 1 0 0

1100 is binary of 12 so output will be 12
*/
}
void orOperation(){
int x;
x = 12|13;
printf("%d",x);

/*
12 = 1 1 0 0
13 = 1 1 0 1
|  = 1 1 0 1

1101 is binary of 13 so output will be 13
*/
}
void xorOperation() {
int x;
x = 12^13;
printf("%d",x);

/*
12 = 1 1 0 0
13 = 1 1 0 1
|  = 0 0 0 1

0001 is binary of 1 so output will be 1
*/
}
void rightShift(){
    int x;
    x = 8 >> 2; // add the no of zeros specified to the left side to change the number
    // binary of 8 is 01000 now to zeros are shifted so it becomes 00010 keeping the no of bits constant
    printf("%d",x);
}
void leftShift(){
    int x;
    x = 1 << 2; // add the no of zeros specified to the right side to change the number
    // binary of 1 is 0001 now to zeros are shifted so it becomes 0100 keeping the no of bits constant
    printf("%d",x);
}
main(){
notOperation();
printf("\n");
andOperation();
printf("\n");
orOperation();
printf("\n");
xorOperation();
printf("\n");
rightShift();
printf("\n");
leftShift();

}

