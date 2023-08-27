void main()
{
    int nums[] = {0,1,4,12,23,67,100,880,1689};
    int len = sizeof(nums)/sizeof(int);
    int index = binarySearch(nums,len,400);
    printf("%d",index);

}

int binarySearch(int arr[],int len,int element)
{
    int low,mid,high;


    low = 0;
    high = len-1;
    // SEARCHING STARTS
    while(low<=high)
    {
    mid = (low+high)/2;
    if(arr[mid]==element)
        return mid;
    if(arr[mid]<element)
        low = mid+1;
    if(arr[mid]>element)
        high = mid-1;
    }
    // SEARCGHING ENDS
    return -1;
}
