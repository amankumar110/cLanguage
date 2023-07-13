// conditional operator is the only ternary operator
// syntax : condition ? output if true : output if false

int compareFunc(){
int ans,num1,num2;
scanf("%d %d",&num1,&num2);
ans= num1>num2?num1:num2;
printf("The greater number is %d",ans);
}
main(){
compareFunc();
}
