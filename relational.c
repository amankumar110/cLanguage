//relational operators
//These operators compare the operands
//Following are the relational operators
/*
> - greater than
< - less than
>= - greater than or equal to
<= - less than or equal to
== - equal to
!= - not equal to

*/

int main(){
 int greater,less,greaterEqual,lessEqual,equal,notEqual;
 greater = 5>3;
 less = 5<3;
 greaterEqual = 5>= 3;
 lessEqual = 5<= 3;
 equal = 5 == 3;
 notEqual = 5!=3;

 printf("five is greater then 3? is right result one : %d",greater );
 printf("\nfive is less than 3? if right result one if wrong result 0 : %d",less);
 printf("\nfive is greater then or equal to 3: %d",greaterEqual);
 printf("\nfive is less then or equal to 3: %d",lessEqual);
 printf("\nfve is equal to 3 : %d",equal);
 printf("\nfive is not equal to 3 : %d",notEqual);



}
