// BINARY OPERATORS AND OPERATIONS
// ON THE BASIS OF PRIORITY FOLLOWING IS THE HIERARCHY:
/*

/ * %
+ -

 */
 //IF A OPERATION CONTAINS ALL THE TOP PRIORITY OPERATORS OR THE LOW PRIORITY OPERATORS THEN IT WILL BE RESOLVED LEFT TO RIGHT. EXAMPLE BELOW:
 main(){
 int x = 3*7%6/3;// 1
 int y = 3-2+56-89; // -32
 printf("%d %d",x,y);

 // The division with operands integers will only return integer no matter if result is a real constant;
 int answer = 6/7;
 printf("\n%d",answer);
// but if only one operand is real the answer will be real;
 float answer2 = 14.7/7;
 printf("\n%f",answer2);
 }
