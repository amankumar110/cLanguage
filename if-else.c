// if else blocks
// for making a decision we use IFs and ELSEs in probably every programming language
// they can be used in following ways
/*
if - only
if-else
*/

main(){
int num = 1;
if(num >= 0 && num < 10){
    printf("this number is one from 0-9 series");
} // if only

if(num == 1) printf("\n true");
else if (num == 0) printf("\n false");
else printf("\n don't know"); // if else-if and else

// nested IFs and ELSEs
  int marks;
  printf("\n enter your marks: ");
  scanf("%d",&marks);
  if(marks>90)
    printf("grade- A");
  else {
    if(marks > 80){
        printf("grade- B");
    } else {
      if(marks>70){
        printf("grade- C");
      } else {
         printf("grade-F");
       }
    }
  }
  // This piece of code looks messy and confusing but there is an easy approach called if-else ladder
  if(marks>90)
    printf("grade-A");
  else if (marks>80){
    printf("grade- B");
  } else if(marks>70){
    printf("grade- C");
  }
    else{
        printf("grade- F");
    }
    // Both are the same but we are removing the curly braces of else block because if-else is a single statement logicaly
  }


