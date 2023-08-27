main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = 9;
    int isSwaped = 0;


   do
   {
       int round;
        for(round=0;round<len-1;round++)
    {
        for(int i=0;i<len-1-round;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int k = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = k;
                isSwaped=1;
            }

        }
    }
    if(round=len-1)
        break;
   } while(isSwaped==1);

    for(int k=0;k<len;k++)
    {
        printf(" %d ",arr[k]);
    }
}
