 main(){
 // Array is a set of similar constants or values.

 // declaring an array
 // int a[]; // error
 // int a[length] correct method
 int a[2];
 int b[2] = {1,2};
 int c[] = {1,5,8,9};

// C program to separate out the sum of even and odd numbers in an array

    int i;
     int even=0,odd=0;
int arr[10];
for(i=0;i<9;i++)
{
    printf("\nEnter %dth value : ",i);
    scanf("%d",&arr[i]);
}

for(i=0;i<9;i++){

    if(arr[i]%2==0)
        even+=arr[i];
    else
        odd+=arr[i];

}
printf("Sum of even is %d\n Sum of odd is %d",even,odd);
 }
