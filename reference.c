 void add(int *p1,int *p2){
    int i;
for(i=0;i<9;i++)
{
    *(p1+i)+=*(p2+i);
}
}
main(){
void add(int*,int*);
int nums[3][3];
int nums2[3][3];
int i,*p=&nums[0][0],*q=&nums2[0][0];

printf("Enter 9 numbers\n");
for(i=0;i<9;i++)
    scanf("%d",p+i);

printf("Enter another 9 numbers\n");
for(i=0;i<9;i++)
    scanf("%d",q+i);

add(&nums[0][0],&nums2[0][0]);

for(i=0;i<9;i++)
{
    if(i==3||i==6){
        printf("\n");
    }
    printf(" %d ",*(p+i));
}
}
