// logical operators
// works on two conditions like 5>4 and 5<10
// output us either zero or 1
// logical operators are
/*
Logical And(&&) - return true if both conditions are true
logical or(||) - returns true if one condition is true
logical not(!) - reverse the condition outputs

*/
 void logicAnd(){
   int ans,x=5,y=8;
  ans = x+y==13&&x-y+2*y==13;
  printf(" %d",ans);
 }
 void logicOr(){
  int ans,x=5,y=8;
  ans = x+y==13||x-2*y+2*y==13;
  printf(" %d",ans);
 }
 void logicNot(){
  int ans,x=5,y=8;
  ans = !(x+y==13&&x-y+2*y==13);
  printf(" %d",ans);
 }

main(){
logicAnd();
logicOr();
logicNot();

}

